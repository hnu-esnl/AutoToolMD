import os
from Graph import Graph
from Port import Port
from Interface import Interface
from IDT import IDT
from GraphMatrix import GraphMatrix
from xml.dom.minidom import parse
import xml.dom.minidom
import xlrd
import igraph as ig
import time
import multiprocessing
import test_GN as Auto_GN
import networkx as nx

filelist = []

def getAllFiles(path, filelist):
    for file in os.listdir(path):
        full_file_path = os.path.join(path, file)
        if os.path.isdir(full_file_path):
            getAllFiles(full_file_path, filelist)
        else:
            if os.path.splitext(full_file_path)[1] == ".arxml":
                #print(full_file_path)
                filelist.append(full_file_path)
    return filelist

def getBC_FCRelation(path,bclist):
    all_file_list = os.listdir(path)
    for file in all_file_list:
        full_file_path = os.path.join(path, file)
        if os.path.isdir(full_file_path):
            getBC_FCRelation(full_file_path, bclist)
        else:
            if os.path.splitext(full_file_path)[1] == ".c":
                bclist.append(full_file_path)
    return bclist


def load(filename):
    try:
        DOMTree = xml.dom.minidom.parse(filename)
        collection = DOMTree.documentElement
    except:
        print("Error")
    return collection

def iterateElement(element, nodename, list):
    nodename_nodes = element.getElementsByTagName(nodename)
    for child in nodename_nodes:
        for child_child in child.childNodes:
            if child_child.nodeType==child.ELEMENT_NODE:
                list.append(child_child)

    return list

def iterateElement1(element, nodename, list):
    nodename_nodes = element.getElementsByTagName(nodename)
    for child in nodename_nodes:
        list.append(child)
    return list

def getSwcName(element, nodename):
    list1 = []
    swcName = ''
    listnode = iterateElement1(element,nodename,list1)
    for r in list1:
        for i in r.childNodes:
            if i.nodeName == "SHORT-NAME":
                swcName = i.firstChild.data
    return swcName

def getIFNum(element, nodename):
    list1 = []
    listnode = iterateElement1(element,nodename,list1)
    return len(listnode)

def getArxmlName(filename):
    ArxmlName = os.path.basename(filename)
    ArxmlName1 = ArxmlName.split('.')[0]
    return ArxmlName1

def getBCName(filename):
    bcname = filename.split('\\')[-3]
    return bcname

def getEveryPort(rnodes, swcName):
    i = 0
    portlist = []
    for r in rnodes:
        #print(r.nodeName)
        port = Port()
        portType = r.nodeName
        for i in r.childNodes:
            if i.nodeName == "SHORT-NAME":
                shortName = i.firstChild.data
            if i.nodeName == "PROVIDED-INTERFACE-TREF" or i.nodeName == "REQUIRED-INTERFACE-TREF":
                portInterface = i.firstChild.data
                ifType = i.getAttribute("DEST")
        port.initPort(swcName, shortName, portType, portInterface, ifType)
        portlist.append(port)
    return portlist

def extractPortInfo(path):
    filelist = []
    swcNum = 0
    files = getAllFiles(path, filelist)
    swcNum = len(files)
    portList = []
    runnableList = []
    interfaceList = []
    ifList = []
    csifNum = 0
    srifNum = 0
    csifnum = 0
    srifnum = 0
    pportnum = 0
    rportnum = 0
    modulemap = []
    for i in files:
        BCname = getBCName(i)
        document = load(i)
        swcname = getSwcName(document, "APPLICATION-SW-COMPONENT-TYPE")
        modulemap.append([BCname, swcname])
        #idtnode = getIDTInfo(document, 'IMPLEMENTATION-DATA-TYPE')
        interface = getPortInterface(document, "SENDER-RECEIVER-INTERFACE", swcname)
        try:
            list1 = []
            list2 = []

            # root = document.documentElement
            portsnode = iterateElement(document, "PORTS", list1)
            runnablenode = iterateElement(document, "RUNNABLES", list2)

            csifnum = getIFNum(document, "CLIENT-SERVER-INTERFACE")
            srifnum = getIFNum(document, "SENDER-RECEIVER-INTERFACE")
            csifNum += csifnum
            srifNum += srifnum

            portlist = getEveryPort(portsnode, swcname)
            pportnum = 0
            rportnum = 0
            #nouseInterface(interface, swcname)
            for j in portlist:
                #print(j.getSwcname())
                portList.append(j)
                if j.getPortType() == "P-PORT-PROTOTYPE":
                    pportnum += 1
                elif j.getPortType() == "R-PORT-PROTOTYPE":
                    rportnum += 1
            for j in runnablenode:
                runnableList.append(j)
            for j in interface:
                interfaceList.append(j)
            ifList.append([swcname, len(portsnode), csifnum + srifnum, len(runnablenode), csifnum, srifnum,pportnum,rportnum])
        except :
            print("error:" + swcname)
            continue
    p = sorted(portList, key= lambda x: (x.swcName,x.portType))
    ifList = sorted(ifList,key=(lambda x:x[0]))
    runnableNum = len(runnableList)
    ifNum = csifNum + srifNum
    nouesInterfaceList =  nouseInterface(interfaceList)
    return p,swcNum,runnableNum,ifNum,ifList,interfaceList,nouesInterfaceList,modulemap

def ArxmlCounter(file):
    BCname = getBCName(file)
    document = load(file)
    swcname = getSwcName(document, "APPLICATION-SW-COMPONENT-TYPE")
    #modulemap.append([BCname, swcname])
    # idtnode = getIDTInfo(document, 'IMPLEMENTATION-DATA-TYPE')
    interface = getPortInterface(document, "SENDER-RECEIVER-INTERFACE", swcname)
    try:
        list1 = []
        list2 = []

        # root = document.documentElement
        portsnode = iterateElement(document, "PORTS", list1)
        runnablenode = iterateElement(document, "RUNNABLES", list2)

        csifnum = getIFNum(document, "CLIENT-SERVER-INTERFACE")
        srifnum = getIFNum(document, "SENDER-RECEIVER-INTERFACE")
        csifNum += csifnum
        srifNum += srifnum

        portlist = getEveryPort(portsnode, swcname)
        pportnum = 0
        rportnum = 0
        # nouseInterface(interface, swcname)
        for j in portlist:
            if j.getPortType() == "P-PORT-PROTOTYPE":
                pportnum += 1
            elif j.getPortType() == "R-PORT-PROTOTYPE":
                rportnum += 1
        #ifList.append([swcname, len(portsnode), csifnum + srifnum, len(runnablenode), csifnum, srifnum, pportnum, rportnum])
    except:
        print("error:" + swcname)
    return [[swcname, len(portsnode), csifnum + srifnum, len(runnablenode), csifnum, srifnum, pportnum, rportnum],portlist,runnablenode,interface,[BCname,swcname]]

def portList2Array(list1):
    length = len(list1)
    portArr = []
    i = 0
    for j in range(length):
        portArr.append([])
        portArr[j].append(list1[j].getSwcname())
        portArr[j].append(list1[j].getShortName())
        portArr[j].append(list1[j].getPortType())
        portArr[j].append(list1[j].getPortInterface())
        portArr[j].append(list1[j].getIfType())
    return portArr

def topSwc(list):
    swc = []
    swcNum = []
    index = list[0][0]
    num = 0
    count = 0
    arr = {}
    swc.append(list[0][0])
    for port in list:
        #print(port[0])
        count += 1
        if (port[0] == index):
            num = num + 1
        else:
            swcNum.append(num)
            num = 1
            swc.append(port[0])
            index = port[0]
        if (count == len(list)):
            swcNum.append(num)
    #arr=dict(zip(swc, swcNum))
    for symbol, digit in zip(swc, swcNum):
        arr[symbol] = digit
    #arr = sorted(arr.items(), key=lambda d: d[1], reverse=True)
    arr = {k: v for k, v in sorted(arr.items(), key=lambda item: item[1], reverse=True)}
    #print(arr.values())
    return arr

def getPortInfo(portarr):
    #list1 = extractPortInfo(aswpath)
    list2 = sorted(portarr, key= lambda x: x[0])
    #sortArr = portList2Array(list2)
    graph = Graph()
    list1 = graph.getPortGraph(list2, len(list2))
    lists = sorted(list1, key=lambda x: x[0])
    return lists


def read_excel(path):
    path1 = 'r' + '\'' + path + '\''
    portArr = []
    workbook = xlrd.open_workbook(path)
    sheet = workbook.sheet_by_index(0)
    titles = sheet.row_values(0)
    rows = sheet.nrows
    cols = sheet.ncols
    for i in range(1, rows):
        row = sheet.row_values(i)
        portArr.append(row)
    return portArr

def getMetrix(portArr):
    list1 = sorted(portArr, key=lambda x: x[0])
    GM = GraphMatrix(0,[],0,0,[])
    graph = Graph()
    vertexNum = graph.VertexLengh(GM.getVertex(), portArr)
    GM.setVertexNum(vertexNum)
    graph.CreatG(list1, len(list1), GM)
    return GM


def getNum(GM):
    port = GM.getVertexNum()
    return port

def getVertex(GM):
    vertex = GM.getVertex()
    return vertex

def getBcNum(moduleMap):
    for i in moduleMap:
        i[0]

def auto_GN(GM,swcname,cnum):
    relation = []
    name = []
    result1 = ''
    result2 = ''
    num = GM.getVertexNum()
    for a in range(0, num):
        relation.append([])
    for i in range(0, GM.getVertexNum()):
        for j in range(0, GM.getVertexNum()):
            relation[i].append(GM.getEdgeWeight1(i, j))
    for k in GM.getVertex():
        name.append(k)
    length = len(name)
    unweight_data1 = []
    gn_date = []
    gn_weight = []
    for indexi, valuei in enumerate(relation):
        for indexj, valuej in enumerate(valuei):
            if (valuej > 0):
                unweight_data1.append([indexi, indexj])
                if ([indexj, indexi] not in unweight_data1):
                    gn_date.append([indexi, indexj])
                    gn_weight.append(valuej)
                else:
                    for i in gn_date:
                        if indexj == i[0] and indexi == i[1]:
                            gn_weight[gn_date.index(i)] += valuej
    G = Auto_GN.load_graph(gn_date, gn_weight)

    G_clone = Auto_GN.clone_graph(G)
    pos = nx.spring_layout(G)
    t = time.perf_counter()
    algo = Auto_GN.GN(G, cnum)
    partition = algo.execute()

    print(f'coast:{time.perf_counter() - t:.8f}s')
    partition1 = [0] * length
    partitionname = [''] * len(partition[0])
    for i in range(len(partition[0])):
        for j in partition[0][i]:
            partition1[j] = i
    index = 0
    for i in partition1:
        partitionname[i] += name[index] + ', '
        index += 1
    g_auto = ig.Graph(n=length, edges=gn_date)
    pal = ig.drawing.colors.ClusterColoringPalette(len(partition1))
    g_auto.vs['color'] = pal.get_many(partition1)
    if cnum == 0:
        pname = "auto_gn.png"
    else:
        pname = "auto_gn1.png"
    ig.plot(g_auto, vertex_size=20, edge_width=1, edge_color='gray', vertex_label=name, vertex_label_dist=1,
            bbox=(800, 800)).save(pname)
    for i in range(len(g_auto.vs['color'])):
        g_auto.vs['color'][i] = list(g_auto.vs['color'][i])
        for j in g_auto.vs['color'][i]:
            j = j * 255
    color_before = []
    colorindex = []
    for i in range(len(g_auto.vs['color'])):
        color_before.append(list(g_auto.vs['color'][i]))
    for i in range(len(color_before)):
        for j in range(len(color_before[i])):
            color_before[i][j] = round(color_before[i][j] * 255)
    for i in partition[0]:
        colorindex.append(color_before[i[0]])
    return partition,colorindex,partitionname

def communityDetection(GM,swcname,cnum):
    relation = []
    name = []
    num = GM.getVertexNum()
    for a in range(0, num):
        relation.append([])
    for i in range(0, GM.getVertexNum()):
        for j in range(0, GM.getVertexNum()):
            relation[i].append(GM.getEdgeWeight1(i, j))
    for k in GM.getVertex():
        name.append(k)
    length = len(name)
    unweight_data1 = []
    gn_date = []
    gn_weight = []
    for indexi, valuei in enumerate(relation):
        for indexj, valuej in enumerate(valuei):
            if (valuej > 0):
                unweight_data1.append([indexi, indexj])
                if([indexj, indexi] not in unweight_data1):
                    gn_date.append([indexi, indexj])
                    gn_weight.append(valuej)
                else:
                    for i in gn_date:
                        if indexj == i[0] and indexi == i[1]:
                            gn_weight[gn_date.index(i)] +=valuej
    unweight_data2 = []
    for indexi, valuei in enumerate(relation):
        for indexj, valuej in enumerate(valuei):
            if (valuej > 0):
                if ([indexj, indexi] not in unweight_data2):
                    unweight_data2.append([indexi, indexj])
    g =  ig.Graph(n=length, edges=unweight_data1)
    return g,name


def RGB_to_Hex(tmp):
    rgb = tmp.split(',')
    strs = '#'
    for i in rgb:
        num = int(i)
        strs += str(hex(num))[-2:].replace('x', '0').upper()
    return strs

def getIDTInfo(root,nodename):
    idtList = []
    adtList = []
    idtName = ''
    dimension = ''
    iterateElement1(root,nodename,adtList)
    for r in adtList:
        for i in r.childNodes:

            if i.nodeName == "SHORT-NAME":
                idtName = i.firstChild.data
            if i.nodeName == "CATEGORY" and i.firstChild.data != None:
                if i.firstChild.data == "VALUE":
                    dimension = '1'
                elif i.firstChild.data == "ARRAY":
                    arraysizelist = iterateElement1(r,"ARRAY-SIZE",[])
                    if len(arraysizelist) > 0:
                        arraysize = arraysizelist[0]
                        for x in arraysize.childNodes:
                            dimension = x

            everyIDT = IDT(idtName,dimension)
        idtList.append(everyIDT)
    return idtList


def identifyImplOrExpl(portList,root):
    runnodes = iterateElement(root,"RUNNABLES",[])
    for r in runnodes:

        runmap = {'DATA-RECEIVE-POINT-BY-ARGUMENTS':0,'DATA-SEND-POINTS':0,'DATA-READ-ACCESSS':0,'DATA-WRITE-ACCESSS':0}
        for i in r.childNodes:
            if len(i.childNodes) == 1:
                runmap[i.nodeName] = i.firstChild.data

            elif i.nodeName == "DATA-RECEIVE-POINT-BY-ARGUMENTS":
                runmap["DATA-RECEIVE-POINT-BY-ARGUMENTS"] == len(i.childNodes)

                begin = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.find('_') + 1
                end = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.rfind('_')
                portname = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data[begin:end]

                plicit = "ExplicitReceive"
                for p in portList:
                    if p.getShortName() == portname:
                        p.setImplicit(plicit)
            elif i.nodeName == "DATA-SEND-POINTS":
                runmap["DATA-SEND-POINTS"] = len(i.childNodes)

                begin = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.find('_') + 1
                end = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.rfind('_')
                portname = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data[begin:end]

                plicit = "ExplicitSend"
                for p in portList:
                    if p.getShortName() == portname:
                        p.setImplicit(plicit)
            elif i.nodeName == "DATA-READ-ACCESSS":
                runmap["DATA-READ-ACCESSS"] = len(i.childNodes)

                begin = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.find('_') + 1
                end = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.rfind('_')
                portname = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data[begin:end]

                plicit = "ImplicitRead"
                for p in portList:
                    if p.getShortName() == portname:
                        p.setImplicit(plicit)

            elif i.nodeName == "DATA-WRITE-ACCESSS":
                runmap["DATA-WRITE-ACCESSS"] = len(i.childNodes)

                begin = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.find('_') + 1
                end = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data.rfind('_')
                portname = i.getElementsByTagName("SHORT-NAME")[0].childNodes[0].data[begin:end]

                plicit = "ImplicitWrite"
                for p in portList:
                    if p.getShortName() == portname:
                        p.setImplicit(plicit)

    return portList


def getPortInterface(root,nodename,swcname):
    ifList = []
    portsnode = iterateElement(root,"PORTS",[])
    portslist1 = getEveryPort(portsnode,swcname)
    portslist = identifyImplOrExpl(portslist1,root)
    dataTypeMap = getDataTypeMapping(root,"DATA-TYPE-MAPPING-SET")
    list1 = []
    listnode = iterateElement1(root,nodename,list1)
    for r in listnode:
        portif = Interface()
        portif.setSWCName(swcname)
        for i in r.childNodes:
            if i.nodeName == "SHORT-NAME":
                ifName = i.firstChild.data
                portif.setportInterface(ifName)
                port = selectPortByPortName(ifName,portslist)
                if port != None:
                    portif.setportName(port.getShortName())
                    portif.setportType(port.getPortType())
                    portif.setifType(port.getIfType())
                else:
                    print(swcname+": "+ifName+" port is not exist")
                    portif.setportName("portNotMatchIf: "+swcname+", "+ifName)
                    portif.setportType("not")
            elif i.nodeName == "DATA-ELEMENTS":
                for j in i.childNodes:
                    if j.nodeName == "VARIABLE-DATA-PROTOTYPE":
                        for k in j.childNodes:
                            if k.nodeName == "TYPE-TREF":
                                dtsplit = k.firstChild.data.split('/')
                                if k.getAttribute("DEST") == "IMPLEMENTATION-DATA-TYPE":
                                    portif.setIDTName(dtsplit[len(dtsplit)-1])
                                elif k.getAttribute("DEST") == "APPLICATION-PRIMITIVE-DATA-TYPE":
                                    adtname = dtsplit[len(dtsplit)-1]
                                    if adtname in dataTypeMap:
                                        portif.setIDTName(str(dataTypeMap[adtname]))

        ifList.append(portif)
    return ifList

def selectPortByPortName(ifname,list):
    for i in list:
        if i.getPortInterface().split("/")[-1] == ifname:
            return i
    return None

def getDataTypeMapping(root,nodename):
    dataTypeMap = {}
    dtmslist = []
    iterateElement1(root,nodename,dtmslist)
    if len(dtmslist) > 0:
        dtmsEle = dtmslist[0]
        shortname = dtmsEle.getElementsByTagName('SHORT-NAME')[0]
        dataTypeMap["SHORT-NAME"] = shortname.childNodes[0].data

        if len(dtmsEle.getElementsByTagName("DATA-TYPE-MAPS")) != 0:
            dtmEle = dtmsEle.getElementsByTagName("DATA-TYPE-MAPS")[0]
            for i in range(0,len(dtmEle.getElementsByTagName("APPLICATION-DATA-TYPE-REF"))):

                adtsplit = dtmEle.getElementsByTagName("APPLICATION-DATA-TYPE-REF")[i].childNodes[0].data.split("/")
                idtsplit = dtmEle.getElementsByTagName("IMPLEMENTATION-DATA-TYPE-REF")[i].childNodes[0].data.split("/")
                if len(adtsplit) > 1 and len(idtsplit) > 1:
                    dataTypeMap[adtsplit[len(adtsplit)-1]] = idtsplit[len(idtsplit)-1]

    return  dataTypeMap

def nouseInterface(interfaceList):
    nouseInterfaceList = []
    interfaceList = sorted(interfaceList, key= lambda x: (x.getportInterface(),x.getportType()))
    for i in range(0,len(interfaceList)):
        j = i + 1

        if interfaceList[i].getportType() == "P-PORT-PROTOTYPE":
            isPPortMapped = False
            for j in range(i+1,len(interfaceList)):
                if interfaceList[i].getportInterface() == interfaceList[j].getportInterface() and interfaceList[j].getportType() == "R-PORT-PROTOTYPE":

                    if len(interfaceList[i].getIDTName())>0 and len(interfaceList[j].getIDTName())>0 :

                        if interfaceList[i].getIDTName().lower() == interfaceList[j].getIDTName().lower():
                            interfaceList[j].setChecked(True)
                            isPPortMapped = True
                else:
                    break
            if isPPortMapped == False:
                nouseInterfaceList.append(interfaceList[i])
        else:
            if interfaceList[i].getChecked() == False:
                nouseInterfaceList.append(interfaceList[i])
                interfaceList[i].setChecked(True)

    return nouseInterfaceList



