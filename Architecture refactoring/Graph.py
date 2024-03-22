from GraphMatrix import GraphMatrix
class Graph:
    def VertexLengh(self, Vertex, arr):
        j = 0
        Vertex.clear()
        #Vertex[0] = arr[0][0]
        Vertex.append(arr[0][0])
        for i in range(1,len(arr)):
            tmp = arr[i][0]
            if not tmp == Vertex[j]:
                j = j + 1
                Vertex.append(tmp)
        return j + 1

    def vertexIndex(self, vertex, name, len):
        index = -1
        for i in range(0, len):
            if vertex[i] == name:
                index = i
        return index


    def CreatG(self, arr, length, GM):
        #print(length)

        for i in range(0, length):
            k = 1
            count = 0
            shortname = arr[i][1]
            PPortName = ""
            PPortName1 = ""
            index1 = index2 = pIndex = 0
            index = -1
            pkg = []
            for j in range(i + 1, length):
                if arr[j][1] == shortname:
                    if arr[j][2] == "P-PORT-PROTOTYPE" and arr[i][2] =="R-PORT-PROTOTYPE":
                        PPortName  = arr[j][0]
                        PPortName1 = arr[i][0]
                        pkg.append(arr[i][0])
                    if arr[i][2] == "P-PORT-PROTOTYPE" and arr[j][2] =="R-PORT-PROTOTYPE":
                        PPortName = arr[i][0]
                        PPortName1 = arr[j][0]
                        pkg.append(arr[j][0])
            pIndex = self.vertexIndex(GM.getVertex(), PPortName, GM.getVertexNum())
            #GM.EdgeWeight.clear()

            for k in range(len(pkg)):
                rIndex = self.vertexIndex(GM.Vertex, pkg[k], GM.VertexNum)
                GM.EdgeWeight[pIndex][rIndex] = GM.EdgeWeight[pIndex][rIndex] + 1


            i = i + count
        return GM.getEdgeWeight()

    def getPortGraph(self, arr, length):
        portList = []
        for i in range(0, length):
            k = 1
            count = 0
            shortname = arr[i][1]
            PPortSWCName = ""
            PPortName = ""
            PPortName1 = ""
            pkg = []
            for j in range(i + 1, length):
                if arr[j][1] == shortname:
                    if arr[j][2] == "P-PORT-PROTOTYPE" and arr[i][2] =="R-PORT-PROTOTYPE":
                        PPortName  = arr[j][0]
                        PPortName1 = arr[i][0]
                        PPortSWCName = shortname
                        portarr = [PPortName, PPortName1, PPortSWCName]
                        portList.append(portarr)
                    if arr[i][2] == "P-PORT-PROTOTYPE" and arr[j][2] =="R-PORT-PROTOTYPE":
                        PPortName = arr[i][0]
                        PPortName1 = arr[j][0]
                        PPortSWCName = shortname
                        portarr = [PPortName, PPortName1, PPortSWCName]
                        portList.append(portarr)
        return portList
