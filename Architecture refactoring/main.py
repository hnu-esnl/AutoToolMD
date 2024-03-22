from mainUI_change1 import *
import sys
import os
if hasattr(sys, 'frozen'):
    os.environ['PATH'] = sys._MEIPASS + ";" + os.environ['PATH']
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5.QtWidgets import *
from PyQt5.QtCore import Qt, QUrl
from PyQt5.QtGui import QColor,QCursor
from PyQt5.QtGui import QFontMetrics
import getInformation as Extract
from pyecharts.charts import Bar, Page
from pyecharts import options as opts
from pyecharts.globals import ThemeType
import igraph as ig
from PyQt5.QtGui import QPixmap,QIcon
from PyQt5.QtWidgets import QListWidget, QListWidgetItem, QCheckBox
from GraphMatrix import GraphMatrix
from pyecharts.charts import Graph as pyGraph
from pyecharts.commons.utils import JsCode
from collections import Counter

class mainUI(QMainWindow):
    def __init__(self):
        super().__init__()
        self.input = 0
        self.match1 = 0
        self.match2 = 0
        self.view = 0
        self.viewindex = 0
        self.clusteringindex = 0
        self.vertex_list = []
        self.ui = Ui_MainWindow_mainUI()
        self.ui.setupUi(self)
        self.setWindowTitle("AutoToolMD")
        self.setWindowIcon(QIcon("images/icon/icons8-car-60.png"))
        self.ui.pushButton_info.clicked.connect(lambda:self.changePage(3))
        self.ui.pushButton_gm.clicked.connect(lambda:self.changePage(0))
        self.ui.pushButton_view.clicked.connect(lambda:self.changePage(5))
        self.ui.pushButton_swcinfo.clicked.connect(lambda:self.changePage(4))
        self.ui.pushButton_help.clicked.connect(lambda: self.changePage(1))
        self.ui.pushButton_report.clicked.connect(lambda: self.changePage(2))
        self.ui.pushButton_info_choose.clicked.connect(self.open_fileDirectory)
        self.ui.pushButton_info_enter.clicked.connect(self.portInfo)
        self.ui.pushButton_info_choose_2.clicked.connect(self.choose_file)
        self.ui.pushButton_info_enter_2.clicked.connect(self.relationInfo)
        self.ui.pushButton_info_choose_3.clicked.connect(self.choose_file1)
        self.ui.pushButton_left.clicked.connect(lambda: self.change_view(0))
        self.ui.pushButton_right.clicked.connect(lambda: self.change_view(1))
        self.ui.pushButton_swc_2.clicked.connect(self.selectView1)
        self.ui.pushButton_swc_3.clicked.connect(self.selectView2)
        self.ui.pushButton_all_2.clicked.connect(self.all_checkBox1)
        self.ui.pushButton_allnot_2.clicked.connect(self.clear_checkBox1)
        self.ui.pushButton_3.clicked.connect(self.clusteringNum)
        self.ui.tableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        self.ui.tableWidget.verticalHeader().setVisible(False)
        self.ui.tableWidget_2.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        self.ui.tableWidget_2.verticalHeader().setVisible(False)
        self.ui.tableWidget.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.ui.tableWidget_2.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.ui.tableWidget.setSelectionMode(QAbstractItemView.NoSelection)
        self.ui.tableWidget_2.setSelectionMode(QAbstractItemView.NoSelection)
        font = self.ui.tableWidget.horizontalHeader().font()
        font.setBold(True)
        self.ui.tableWidget.horizontalHeader().setFont(font)
        self.ui.tableWidget_2.setShowGrid(False)
        self.ui.textEdit.setFocusPolicy(QtCore.Qt.NoFocus)
        self.ui.textEdit_2.setFocusPolicy(QtCore.Qt.NoFocus)
        self.ui.textEdit_4.setFocusPolicy(QtCore.Qt.NoFocus)
        self.ui.textEdit_5.setFocusPolicy(QtCore.Qt.NoFocus)
        self.ui.spinBox.setRange(5,20)
        self.ui.spinBox.setValue(5)
        self.ui.spinBox.setFocusPolicy(QtCore.Qt.NoFocus)
        self.ui.label_22.setWordWrap(True)
        self.ui.label_39.setWordWrap(True)
        self.ui.label_40.setWordWrap(True)
        self.ui.label_18.setText('<font>Click <font color = "#3366ff">Open Folder</font> button in the upload interface and select the project to be parsed.</font>' + '\n')
        self.ui.label_25.setText('<font color = \"gray\">Note: </font>' + '\n')
        self.ui.label_26.setText('<font color = \"gray\">Other buttons in the toolbar can only be used after the import is successful</font>' + '\n')
        self.ui.label_23.setText('<font>Click <font color = "#3366ff">Information</font> button to display the details of SWC.</font>' + '\n')
        self.ui.label_24.setText('<font>Click <font color = "#3366ff">View</font> button to display the views of interactions between components.</font>' + '\n')
        self.ui.label_22.setText('<font>Click <font color = "#3366ff">Cluster</font> button and select the number of modules. Click <span style="color:#409EFF;text-decoration: underline">recommended partition number </span>to view the module partition results of the components obtained by using two different clustering algorithms.'
                                 '</font>'+'\n'+'<font>Click <span style="color:#409EFF;text-decoration: underline">Customize</span> and chose to divide the architecture into 5 to 20 modules.</font>' + '\n')
        self.ui.label_39.setText('<font>Click <font color = "#3366ff">Report</font> button to view the results of different module division methods.</font>' + '\n')
        self.ui.label_40.setText('<font color = "#3366ff">Modularity</font><font>(Module division evaluation index): The closer the modularity is to 1, the better the module partition is, and the more closely connected the divided modules are.'
                                 ' When the modularity is between 0.3 and 0.7, it indicates that the clustering effect is good.(In real network analysis, the highest modularity usually occurs between 0.3 and 0.7.)</font>' + '\n')
        self.show()

    def changePage(self,index):
        if(index == 1):
            self.ui.stackedWidget.setCurrentIndex(index)
            self.ui.pushButton_help.setStyleSheet("background-color: rgb(64, 158, 255);")
            self.ui.pushButton_gm.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_view.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_report.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_info.setStyleSheet("background-color: rgb(160, 207, 255);")
        elif index == 3:
            self.ui.stackedWidget.setCurrentIndex(index)
            self.ui.pushButton_info.setStyleSheet("background-color: rgb(64, 158, 255);")
            self.ui.pushButton_view.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_gm.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_report.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(160, 207, 255);")
            self.ui.pushButton_help.setStyleSheet("background-color: rgb(160, 207, 255);")
        elif(self.input == 0):
            QMessageBox.critical(self, "Error", "Please import the project configuration file first!")
        else:
            self.ui.stackedWidget.setCurrentIndex(index)
            if(index == 0):
                self.ui.pushButton_gm.setStyleSheet("background-color: rgb(64, 158, 255);")
                self.ui.pushButton_info.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_view.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_help.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_report.setStyleSheet("background-color: rgb(160, 207, 255);")
            elif (index == 2):
                self.ui.pushButton_report.setStyleSheet("background-color: rgb(64, 158, 255);")
                self.ui.pushButton_view.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_gm.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_info.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_help.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(160, 207, 255);")
            elif (index == 4):
                self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(64, 158, 255);")
                self.ui.pushButton_view.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_gm.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_info.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_help.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_report.setStyleSheet("background-color: rgb(160, 207, 255);")
            elif (index == 5):
                self.ui.pushButton_view.setStyleSheet("background-color: rgb(64, 158, 255);")
                self.ui.pushButton_swcinfo.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_gm.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_info.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_help.setStyleSheet("background-color: rgb(160, 207, 255);")
                self.ui.pushButton_report.setStyleSheet("background-color: rgb(160, 207, 255);")

    def resize_win(self):
        if self.isMaximized():
            self.showNormal()
            self.ui.pushButton_maxsize.setIcon(QtGui.QIcon(u"D:\pythonProject\images\icon\icons8-expand-32.png"))
        else:
            self.showMaximized()
            self.ui.pushButton_maxsize.setIcon(QtGui.QIcon(u"D:\pythonProject\images\icon\icons8-compress-32.png"))

    def mousePressEvent(self, event):
        if event.button() == QtCore.Qt.LeftButton and self.isMaximized() == False:
            self.m_flag = True
            self.m_Position = event.globalPos() - self.pos()
            event.accept()
            self.setCursor(QtGui.QCursor(QtCore.Qt.OpenHandCursor))

    def mouseMoveEvent(self, mouse_event):
        if QtCore.Qt.LeftButton and self.m_flag:
            self.move(mouse_event.globalPos() - self.m_Position)
            mouse_event.accept()

    def mouseReleaseEvent(self, mouse_event):
        self.m_flag = False
        self.setCursor(QtGui.QCursor(QtCore.Qt.ArrowCursor))

    def effect_shadow_style(self, widget):
        effect_shadow = QtWidgets.QGraphicsDropShadowEffect(self)
        effect_shadow.setOffset(0, 4)
        effect_shadow.setBlurRadius(24)
        effect_shadow.setColor(QColor(135, 147, 154))
        widget.setGraphicsEffect(effect_shadow)

    def effect_shadow_style2(self, widget):
        effect_shadow = QtWidgets.QGraphicsDropShadowEffect(self)
        effect_shadow.setOffset(0, 4)
        effect_shadow.setBlurRadius(24)
        effect_shadow.setColor(QColor(253, 139, 133))
        widget.setGraphicsEffect(effect_shadow)

    def effect_shadow_style3(self, widget):
        effect_shadow = QtWidgets.QGraphicsDropShadowEffect(self)
        effect_shadow.setOffset(0, 4)
        effect_shadow.setBlurRadius(24)
        effect_shadow.setColor(QColor(243, 175, 189))
        widget.setGraphicsEffect(effect_shadow)

    def effect_shadow_style4(self, widget):
        effect_shadow = QtWidgets.QGraphicsDropShadowEffect(self)
        effect_shadow.setOffset(0, 4)
        effect_shadow.setBlurRadius(24)
        effect_shadow.setColor(QColor(66, 226, 192))
        widget.setGraphicsEffect(effect_shadow)


    def open_fileDirectory(self, Filepath):
        m = QtWidgets.QFileDialog.getExistingDirectory(None, "Select folder", "C:/")
        self.ui.lineEdit_info.setText(m)
        self.ui.lineEdit_info_2.setText("")

    def choose_infoDirection(self, Filepath):
        m = QtWidgets.QFileDialog.getExistingDirectory(None, "Select save path", "C:/")
        self.ui.lineEdit_info_2.setText(m)

    def choose_file(self):
        fileName, filetype = QtWidgets.QFileDialog.getOpenFileName(self, "Select file", "C:/",
                                                          "All Files (*);;Excel Files (*.xls);;Excel Files (*.xlsx)")
        #print(fileName1, filetype)
        self.ui.lineEdit_info_2.setText(fileName)
        self.ui.lineEdit_info.setText("")

    def choose_file1(self):
        fileName, filetype = QtWidgets.QFileDialog.getOpenFileName(self, "Select file", "C:/",
                                                          "All Files (*);;Excel Files (*.xls);;Excel Files (*.xlsx)")
        self.ui.lineEdit_info_3.setText(fileName)

    def choose_matchDirection(self, Filepath):
        m = QtWidgets.QFileDialog.getExistingDirectory(None, "Select save path", "C:/")
        self.ui.lineEdit_gm_2.setText(m)

    def portInfo(self):
        QApplication.processEvents()
        filelist = []
        softwareName = ''
        arxmlDirection = self.ui.lineEdit_info.text()
        if(arxmlDirection == ""):
            QMessageBox.critical(self, "Error", "The import path is empty!")
        else:
            QMessageBox.information(self, "Success", "Import successfully!")
            self.ui.lineEdit_info_2.setText("")
            self.input = 1
            softwareName = arxmlDirection.split('/')[-2]
            self.softwarename = softwareName
            arxmlDirection = arxmlDirection.replace('/','\\')
            swc = Extract.extractPortInfo(arxmlDirection)
            arxmlInfo = swc[0]
            swcNum = swc[1]
            self.modulemap = swc[7]
            portNum = len(arxmlInfo)
            arxmlInfo1 = Extract.portList2Array(arxmlInfo)
            self.port = arxmlInfo1
            arr = Extract.topSwc(arxmlInfo1)
            self.arr = arr
            metrix = Extract.getMetrix(arxmlInfo1)
            self.matrix = metrix
            num1 = []
            swc1 = []
            for swcName in arr.keys():
                swc1.append(swcName)
            for portnum in arr.values():
                num1.append(portnum)
            swc1 = swc1[:10]
            num1 = num1[:10]
            bar = (
                Bar()
                .add_xaxis(swc1[::-1])
                .add_yaxis("Num of port", num1[::-1],itemstyle_opts=opts.ItemStyleOpts(color="rgb(64, 158, 255)"))
                .reversal_axis()
                .set_global_opts(title_opts=opts.TitleOpts(title="Top 10 SWCs with ports"))
                .set_series_opts(label_opts=opts.LabelOpts(is_show=False, position="right"))
            )
            bar.render(path='render_2.html')
            self.ui.softwareNmae.setText(softwareName)
            self.ui.lcdNumber_swc.display(swcNum)
            self.ui.lcdNumber_port.display(portNum)
            self.ui.webEngineView_info.setUrl(QUrl('file:///render_2.html'))
            self.ui.label_soft.setText(softwareName)
            self.ui.label_swc.setNum(swcNum)
            self.ui.label_port.setNum(portNum)
            self.vertex_list = Extract.getVertex(metrix)
            self.ui.listWidget_2.clear()
            for rowNum in range(0, self.ui.tableWidget.rowCount())[::-1]:
                self.ui.tableWidget.removeRow(rowNum)
            self.ui.tableWidget_2.clearContents()
            self.ui.webEngineView_view.setUrl(QUrl(''))
            self.ui.webEngineView_view_2.setUrl(QUrl(''))
            self.ui.webEngineView_view_3.setUrl(QUrl(''))
            for i in self.vertex_list:
                box = QRadioButton(i)
                item = QListWidgetItem()
                self.ui.listWidget_2.addItem(item)
                self.ui.listWidget_2.setItemWidget(item, box)
                self.ui.listWidget_2.setSpacing(5)
            self.ui.listWidget_2.setStyleSheet("color:gray;")
            com = Extract.communityDetection(self.matrix, self.softwarename, 0)
            g = com[0]
            name = com[1]
            self.ui.textEdit.setText("")
            self.ui.textEdit_2.setText("")
            self.vertex_list = Extract.getVertex(metrix)
            self.ui.treeWidget.clear()
            for rowNum in range(0, self.ui.tableWidget.rowCount())[::-1]:
                self.ui.tableWidget.removeRow(rowNum)
            self.ui.tableWidget_2.clearContents()
            self.ui.webEngineView_view.setUrl(QUrl(''))
            self.ui.webEngineView_view_2.setUrl(QUrl(''))
            self.ui.webEngineView_view_3.setUrl(QUrl(''))
            module = [i[1] for i in self.modulemap]
            modules = []
            for i in self.vertex_list:
                mindex = module.index(i)
                modules.append(self.modulemap[mindex][0])
            dicmodule = dict(zip(self.vertex_list, modules))
            self.bc_fc = dicmodule
            rolelist = set([v for k, v in dicmodule.items()])
            rolelist = sorted(rolelist)
            self.modulelist = rolelist
            modularity = 0
            modularitylist = []
            for k, v in dicmodule.items():
                modularitylist.append(rolelist.index(v))
            print(modularitylist)
            modularityarr = []
            firstname = []
            firstnameindex = []
            for role in rolelist:
                rnode = QTreeWidgetItem(self.ui.treeWidget)
                rnode.setText(0, role)
                index_before = role + ": "
                first = 0
                rnode.setFlags(Qt.ItemFlag.ItemIsAutoTristate | Qt.ItemIsUserCheckable | Qt.ItemIsEnabled)
                rnode.setCheckState(0, Qt.PartiallyChecked)
                for k, v in dicmodule.items():
                    if v == role:
                        child = QTreeWidgetItem(rnode)
                        child.setText(0, k)
                        index_before = index_before + k + ", "
                        if first == 0:
                            firstname.append(k)
                        child.setCheckState(0, Qt.CheckState.Unchecked)
                        first += 1
                modularityarr.append(index_before)
            for i in firstname:
                firstnameindex.append(self.vertex_list.index(i))
            self.ui.treeWidget.setStyleSheet('''#treeWidget::item{height:40px;}''')
            self.ui.treeWidget.expandAll()
            print(modularityarr)
            color = ""
            modularity = ig.Graph.modularity(g, modularitylist)
            pal = ig.drawing.colors.ClusterColoringPalette(len(modularitylist))
            g.vs['color'] = pal.get_many(modularitylist)
            swcname1 = softwareName + ".png"
            ig.plot(g, vertex_size=20, edge_width=1, edge_color='gray', vertex_label=name, vertex_label_dist=1,
                    bbox=(800, 800)).save(swcname1)
            print(len(g.vs['color']))
            for i in range(len(g.vs['color'])):
                g.vs['color'][i] = list(g.vs['color'][i])
                for j in g.vs['color'][i]:
                    j = j * 255
            color_before = []
            colorindex = []
            for i in range(len(g.vs['color'])):
                color_before.append(list(g.vs['color'][i]))
            for i in range(len(color_before)):
                for j in range(len(color_before[i])):
                    color_before[i][j] = round(color_before[i][j] * 255)
            for i in firstnameindex:
                colorindex.append(color_before[i])
            for i in range(len(modularityarr)):
                color = str(colorindex[i][0]) + ',' + str(colorindex[i][1]) + ',' + str(colorindex[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_4.append(
                    '<font color = \"' + color + '\"> ● </font>' + '<font>' + str(i + 1) + '. </font>' +
                    '<font>' + modularityarr[i] + '</font>' + '\n')
            self.ui.label_35.setText(
                "Number of modules: " + str(len(rolelist)) + "\n" + "Modularity: " + str('%.3f' % modularity))
            self.ui.label_gn_3.setPixmap(QPixmap(swcname1))
            self.ui.label_gn_3.setScaledContents(True)
            auto_gn = Extract.auto_GN(self.matrix, self.softwarename, 0)
            self.auto_module = auto_gn[0][0]
            self.auto_Q = auto_gn[0][1]
            self.auto_color = auto_gn[1]
            self.auto_name = auto_gn[2]
            self.ui.label_gn_4.setPixmap(QPixmap('auto_gn.png'))
            self.ui.label_gn_4.setScaledContents(True)
            self.ui.label_36.setText("Number of modules: " + str(len(self.auto_module)) + "\n" +
                                     "Modularity: " + str('%.3f' % self.auto_Q))
            for i in range(len(self.auto_module)):
                color = str(self.auto_color[i][0]) + ',' + str(self.auto_color[i][1]) + ',' + str(self.auto_color[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_5.append('<font color = \"' + color + '\"> ● </font>'
                                                                       '<font>' + str(i + 1) + '.' + self.auto_name[
                                              i] + '</font>' + '\n')


    def all_checkBox1(self):
        roleNodeCnt = self.ui.treeWidget.topLevelItemCount()
        for i in range(0, roleNodeCnt):
            roleNode = self.ui.treeWidget.topLevelItem(i)
            roleNode.setCheckState(0,Qt.Checked)

    def clear_checkBox1(self):
        roleNodeCnt = self.ui.treeWidget.topLevelItemCount()
        for i in range(0, roleNodeCnt):
            roleNode = self.ui.treeWidget.topLevelItem(i)
            nameNodeCnt = roleNode.childCount()
            for j in range(0, nameNodeCnt):
                nameNode = roleNode.child(j)
                nameNode.setCheckState(0,Qt.CheckState.Unchecked)

    def clusteringNum(self):
        if self.ui.radioButton.isChecked():
            self.ui.stackedWidget_2.setCurrentIndex(1)
            self.clusteringindex = 1
            color = ''
            self.ui.textEdit.setText("")
            self.ui.textEdit_2.setText("")
            self.ui.label_gn_2.setPixmap(QPixmap('auto_gn.png'))
            self.ui.label_gn_2.setScaledContents(True)
            self.ui.label_match.setNum(self.auto_Q)
            for i in range(len(self.auto_module)):
                color = str(self.auto_color[i][0]) + ',' + str(self.auto_color[i][1]) + ',' + str(self.auto_color[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_2.append('<font color = \"' + color + '\"> ● </font>'
                                                                       '<font>' + str(i + 1) + '.' + self.auto_name[
                                              i] + '</font>' + '\n')

        elif self.ui.radioButton_2.isChecked():
            self.clusteringindex = 2
            self.ui.stackedWidget_2.setCurrentIndex(1)
            self.ui.label_gn_2.setScaledContents(False)
            self.ui.textEdit_2.setText("")
            index = self.ui.spinBox.value()
            auto_gn = Extract.auto_GN(self.matrix, self.softwarename, index)
            auto_module = auto_gn[0][0]
            auto_Q = auto_gn[0][1]
            auto_color = auto_gn[1]
            auto_name = auto_gn[2]
            self.ui.label_gn_2.setPixmap(QPixmap('auto_gn1.png'))
            self.ui.label_gn_2.setScaledContents(True)
            self.ui.label_match.setNum(auto_Q)
            for i in range(len(auto_module)):
                color = str(auto_color[i][0]) + ',' + str(auto_color[i][1]) + ',' + str(auto_color[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_2.append('<font color = \"' + color + '\"> ● </font>'
                                                                       '<font>' + str(i + 1) + '.' + auto_name[
                                              i] + '</font>' + '\n')

    def selectView(self):
        arr = []
        num = self.matrix.getVertexNum()
        for a in range(0, num):
            arr.append([])
        for i in range(0, self.matrix.getVertexNum()):
            for j in range(0, self.matrix.getVertexNum()):
                arr[i].append(self.matrix.getEdgeWeight1(i, j))
        count = self.ui.listWidget.count()
        cb_list = [self.ui.listWidget.itemWidget(self.ui.listWidget.item(i))
                   for i in range(count)]
        chooses = []
        choose = []
        view = []
        for cb in cb_list:  # type:QCheckBox
            if cb.isChecked():
                chooses.append(cb.text())
        if(len(chooses) == 0):
            QMessageBox.critical(self, "Error", "Please select SWC!")
        else:
            for swc in chooses:
                index_u = self.vertex_list.index(swc)
                choose.append(index_u)
            views = []
            for i in choose:
                for j in choose:
                    view.append(arr[i][j])
                views.append(view)
                view = []
            nodes = []
            links = []
            for i in chooses:
                nodeInfo = {"name": i, "symbolSize": 30,"symbol" : 'rect', }
                nodes.append(nodeInfo)
            for i in range(len(views)):
                for j in range(len(views)):
                    if (views[i][j] > 0) :
                        links.append({"source": chooses[i], "target": chooses[j],"value": views[i][j]})
            c = (
                pyGraph()
                .add("", nodes, links, repulsion=4000,edge_symbol=['circle', 'arrow'],
                     edge_label=opts.LabelOpts(is_show=True, position="middle", formatter="{c}"),
                    linestyle_opts=opts.LineStyleOpts(curve=0.2),
                     )
                .set_global_opts(title_opts=opts.TitleOpts(title="Relationship between SWCs"),
                                 legend_opts=opts.LegendOpts(is_show=False),
                                 )
                .render("graph_with_options.html")
            )
            self.ui.webEngineView_view.setUrl(QUrl('file:///graph_with_options.html'))
            for rowNum in range(0, self.ui.tableWidget.rowCount())[::-1]:
                self.ui.tableWidget.removeRow(rowNum)
            match = Extract.getPortInfo(self.port)
            for line in match:
                if(len(list(set(line)&set(chooses)))) == 2:
                    row = self.ui.tableWidget.rowCount()
                    self.ui.tableWidget.insertRow(row)
                    for j in range(len(line)):
                        item = QTableWidgetItem(str(line[j]))
                        self.ui.tableWidget.setItem(row, j, item)

    def selectView1(self):
        arr = []
        num = self.matrix.getVertexNum()
        for a in range(0, num):
            arr.append([])
        for i in range(0, self.matrix.getVertexNum()):
            for j in range(0, self.matrix.getVertexNum()):
                arr[i].append(self.matrix.getEdgeWeight1(i, j))
        count = self.ui.listWidget_2.count()
        cb_list = [self.ui.listWidget_2.itemWidget(self.ui.listWidget_2.item(i))
                   for i in range(count)]
        chooses = []
        view = []
        for cb in cb_list:
            if cb.isChecked():
                chooses.append(cb.text())
        if(len(chooses) == 0):
            QMessageBox.critical(self, "Error", "Please select SWC!")
        else:
            indegree = []
            outdegree = []
            match = Extract.getPortInfo(self.port)
            for line in match:
                if(line[0] == chooses[0]):
                    outdegree.append(line[1])
                elif(line[1] == chooses[0]):
                    indegree.append(line[0])
            nodes = []
            links = []
            outindex = 0
            index = list(self.arr.keys()).index(chooses[0])
            for i in chooses:
                nodeInfo = {"name": i, "symbolSize": 30 ,"category":0}
                nodes.append(nodeInfo)
            for i in list(Counter(outdegree).keys()):
                nodeInfo = {"name": i, "symbolSize": 30,"category":1 }
                nodes.append(nodeInfo)
            for i in range(len(list(Counter(outdegree).values()))):
                links.append({"source": chooses[0], "target": list(Counter(outdegree).keys())[i], "value": list(Counter(outdegree).values())[i]})
                outindex = outindex + int(list(Counter(outdegree).values())[i])
            categories = [
                {"name": "Send SWC", },
                {"name": "Recieve SWC", "symbol": "rect"},
            ]
            c = (
                pyGraph(init_opts=opts.InitOpts(width="400px",))
                .add("", nodes, links, categories=categories,repulsion=4000, edge_symbol=['circle', 'arrow'],
                     edge_label=opts.LabelOpts(is_show=True, position="middle", formatter="{c}"),

                     )
                .set_global_opts(title_opts=opts.TitleOpts(title="SWC Out Degree"),
                                 legend_opts=opts.LegendOpts(is_show=False),
                                 )
                .render("graph_with_options_1.html")
            )
            nodes = []
            links = []
            inindex = 0
            for i in chooses:
                nodeInfo = {"name": i, "symbolSize": 30,"category":1}
                nodes.append(nodeInfo)
            for i in list(Counter(indegree).keys()):
                nodeInfo = {"name": i, "symbolSize": 30,"category":0}
                nodes.append(nodeInfo)
            categories = [
                {"name": "Send SWC", "symbol": "rect"},
                {"name": "Receive SWC", },
            ]
            for i in range(len(list(Counter(indegree).values()))):
                links.append({"source": list(Counter(indegree).keys())[i],"target": chooses[0],
                              "value": list(Counter(indegree).values())[i]})
                inindex = inindex + int(list(Counter(indegree).values())[i])
            for line in self.modulemap:
                if chooses[0] in line:
                    module = line[0]
                    break
                else:
                    module = 'no'
            self.ui.tableWidget_2.removeRow(1)
            self.ui.tableWidget_2.setRowCount(1)

            item1 = QTableWidgetItem(chooses[0])
            item1.setTextAlignment(Qt.AlignCenter)
            self.ui.tableWidget_2.setItem(0, 0, item1)
            item2 = QTableWidgetItem(str(list(self.arr.values())[index]))
            item2.setTextAlignment(Qt.AlignCenter)
            self.ui.tableWidget_2.setItem(0, 1, item2)
            item3 = QTableWidgetItem(str(outindex))
            item3.setTextAlignment(Qt.AlignCenter)
            self.ui.tableWidget_2.setItem(0, 2, item3)
            item4 = QTableWidgetItem(str(inindex))
            item4.setTextAlignment(Qt.AlignCenter)
            self.ui.tableWidget_2.setItem(0, 3, item4)
            item5 = QTableWidgetItem(module)
            item5.setTextAlignment(Qt.AlignCenter)
            self.ui.tableWidget_2.setItem(0, 4, item5)

            c1 = (
                pyGraph(init_opts=opts.InitOpts(width="400px",))
                .add("", nodes, links,categories=categories, repulsion=4000, edge_symbol=['circle', 'arrow'],
                     edge_label=opts.LabelOpts(is_show=True, position="middle", formatter="{c}"),

                     )
                .set_global_opts(title_opts=opts.TitleOpts(title="SWC In Degree"),
                                 legend_opts=opts.LegendOpts(is_show=False),
                                 )

                .render("graph_with_options_2.html")
            )
            self.ui.webEngineView_view_3.setUrl(QUrl('file:///graph_with_options_2.html'))
            self.ui.webEngineView_view_2.setUrl(QUrl('file:///graph_with_options_1.html'))

    def changePage1(self,index):
        if self.clusteringindex == 0:
            QMessageBox.critical(self, "Error", "Please select the module number to divide!")
        elif self.clusteringindex == 1:
            self.ui.pushButton_2.setEnabled(True)
            self.ui.stackedWidget_2.setCurrentIndex(index)
            if(index == 0):
                self.ui.pushButton.setStyleSheet("border-bottom: 4px solid rgb(83, 92, 255);color: rgb(64, 158, 255);")
                self.ui.pushButton_2.setStyleSheet("border: none;color: rgb(176, 176, 176)")
                self.ui.label_match.setNum(self.match1)
            else:
                self.ui.pushButton_2.setStyleSheet("border-bottom: 4px solid rgb(83, 92, 255);color: rgb(64, 158, 255);")
                self.ui.pushButton.setStyleSheet("border: none;color: rgb(176, 176, 176)")
                self.ui.label_match.setNum(self.match2)
        elif self.clusteringindex == 2:
            self.ui.pushButton_2.setEnabled(False)

    def relationInfo(self):
        softwareName = ''
        portnum = 0
        swcnum = 0
        portDirection = self.ui.lineEdit_info_2.text()
        mapDirection = self.ui.lineEdit_info_3.text()
        if(portDirection == ""):
            QMessageBox.critical(self, "Error", "The path of port information excel is empty!")
        elif(mapDirection == ""):
            QMessageBox.critical(self, "Error", "The path of mapping table is empty!")
        else:
            QMessageBox.information(self, "Success", "Import successfully!")
            self.ui.lineEdit_info.setText("")
            self.input = 1
            softwareName = portDirection.split('/')[-1]
            index = softwareName.find('PORT')
            softwareName = softwareName[0:index-1]
            self.softwarename = softwareName
            portDirection = portDirection.replace('/','\\')
            port = Extract.read_excel(portDirection)
            mapDirection = mapDirection.replace('/','\\')
            modulemap = Extract.read_excel(mapDirection)
            self.modulemap = modulemap
            self.port = port
            portnum1 = len(port)
            arr = Extract.topSwc(port)
            self.arr = arr
            metrix = Extract.getMetrix(port)
            self.matrix = metrix
            num1 = []
            swc1 = []
            for swcName in arr.keys():
                swc1.append(swcName)
            for portnum in arr.values():
                num1.append(portnum)
            swc1 = swc1[:10]
            num1 = num1[:10]
            bar = (
                Bar()
                .add_xaxis(swc1[::-1])
                .add_yaxis("Num of port", num1[::-1], itemstyle_opts=opts.ItemStyleOpts(color="rgb(64, 158, 255)"))  # y轴设置
                .reversal_axis()
                .set_global_opts(title_opts=opts.TitleOpts(title="Top 10 SWCs with ports"))
                .set_series_opts(label_opts=opts.LabelOpts(is_show=False, position="right"))
            )
            bar.render(path='render_2.html')
            self.ui.webEngineView_info.setUrl(QUrl('file:///render_2.html'))
            swcnum = Extract.getNum(metrix)
            self.ui.label_soft.setText("Test Project")
            self.ui.label_swc.setNum(swcnum)
            self.ui.label_port.setNum(portnum1)
            self.ui.softwareNmae.setText(softwareName)
            self.ui.lcdNumber_swc.display(swcnum)
            self.ui.lcdNumber_port.display(portnum1)
            com = Extract.communityDetection(self.matrix,self.softwarename,0)
            com1 = com[0]
            com2 = com[1]
            result1 = com[2]
            result2 = com[3]
            self.match1 = com[4]
            self.match2 = com[5]
            self.arr1 = com[6]
            self.arr2 = com[7]
            self.color1 = com[8]
            self.color2 = com[9]
            g = com[10]
            name = com[11]
            self.ui.textEdit.setText("")
            self.ui.textEdit_2.setText("")

            self.vertex_list = Extract.getVertex(metrix)
            self.ui.listWidget_2.clear()
            self.ui.treeWidget.clear()
            for rowNum in range(0, self.ui.tableWidget.rowCount())[::-1]:
                self.ui.tableWidget.removeRow(rowNum)
            self.ui.tableWidget_2.clearContents()
            self.ui.webEngineView_view.setUrl(QUrl(''))
            self.ui.webEngineView_view_2.setUrl(QUrl(''))
            self.ui.webEngineView_view_3.setUrl(QUrl(''))
            module = [i[1] for i in self.modulemap]
            modules = []
            for i in self.vertex_list:
                mindex = module.index(i)
                modules.append(self.modulemap[mindex][0])
            dicmodule = dict(zip(self.vertex_list, modules))
            self.bc_fc = dicmodule
            rolelist = set([v for k, v in dicmodule.items()])
            rolelist = sorted(rolelist)
            self.modulelist = rolelist
            modularity = 0
            modularitylist = []
            for k, v in dicmodule.items():
                modularitylist.append(rolelist.index(v))
            print(modularitylist)
            modularityarr = []
            firstname = []
            firstnameindex = []
            for role in rolelist:
                rnode = QTreeWidgetItem(self.ui.treeWidget)
                rnode.setText(0, role)
                index_before = role + ": "
                first = 0
                rnode.setFlags(Qt.ItemFlag.ItemIsAutoTristate | Qt.ItemIsUserCheckable | Qt.ItemIsEnabled)
                rnode.setCheckState(0, Qt.PartiallyChecked)
                self.ui.treeWidget.addTopLevelItem(rnode)
                for k, v in dicmodule.items():
                    if v == role:
                        child = QTreeWidgetItem(rnode)
                        child.setText(0, k)
                        index_before = index_before + k + ", "
                        if first == 0:
                            firstname.append(k)
                        child.setCheckState(0, Qt.CheckState.Unchecked)
                        first += 1
                modularityarr.append(index_before)
            for i in firstname:
                firstnameindex.append(self.vertex_list.index(i))
            self.ui.treeWidget.setStyleSheet('''#treeWidget::item{height:40px;}''')
            self.ui.treeWidget.expandAll()
            print(modularityarr)
            for i in self.vertex_list:
                box = QRadioButton(i)
                item = QListWidgetItem()
                self.ui.listWidget_2.addItem(item)
                self.ui.listWidget_2.setItemWidget(item, box)
                self.ui.listWidget_2.setSpacing(5)
            self.ui.listWidget_2.setStyleSheet("color:gray;")
            color = ""
            modularity = ig.Graph.modularity(g,modularitylist)
            pal = ig.drawing.colors.ClusterColoringPalette(len(modularitylist))
            g.vs['color'] = pal.get_many(modularitylist)
            swcname1 = softwareName + ".png"
            ig.plot(g, vertex_size=20, edge_width=1, edge_color='gray', vertex_label=name, vertex_label_dist=1,
                    bbox=(800, 800)).save(swcname1)
            print(len(g.vs['color']))
            for i in range(len(g.vs['color'])):
                g.vs['color'][i] = list(g.vs['color'][i])
                for j in g.vs['color'][i]:
                    j = j * 255
            color_before = []
            colorindex = []
            for i in range(len(g.vs['color'])):
                color_before.append(list(g.vs['color'][i]))
            for i in range(len(color_before)):
                for j in range(len(color_before[i])):
                    color_before[i][j] = round(color_before[i][j] * 255)
            for i in firstnameindex:
                colorindex.append(color_before[i])
            for i in range(len(modularityarr)):
                color = str(colorindex[i][0]) + ',' + str(colorindex[i][1]) + ',' + str(colorindex[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_4.append('<font color = \"' + color + '\"> ● </font>'+'<font>'+str(i+1)+'. </font>'+
                                                                     '<font>' + modularityarr[i] + '</font>' + '\n')
            self.ui.label_35.setText("Number of modules: " +str(len(rolelist))+"\n"+"Modularity: " + str('%.3f'%modularity))
            self.ui.label_gn_3.setPixmap(QPixmap(swcname1))
            self.ui.label_gn_3.setScaledContents(True)
            auto_gn = Extract.auto_GN(self.matrix,self.softwarename,0)
            self.auto_module = auto_gn[0][0]
            self.auto_Q = auto_gn[0][1]
            self.auto_color = auto_gn[1]
            self.auto_name = auto_gn[2]
            self.ui.label_gn_4.setPixmap(QPixmap('auto_gn.png'))
            self.ui.label_gn_4.setScaledContents(True)
            self.ui.label_36.setText("Number of modules: " + str(len(self.auto_module)) + "\n" +
                                     "Modularity: " + str('%.3f' % self.auto_Q))
            for i in range(len(self.auto_module)):
                color = str(self.auto_color[i][0]) + ',' + str(self.auto_color[i][1]) + ',' + str(self.auto_color[i][2])
                color = Extract.RGB_to_Hex(color)
                self.ui.textEdit_5.append('<font color = \"' + color + '\"> ● </font>'
                                                                       '<font>' +str(i+1)+'.' + self.auto_name[i] + '</font>' + '\n')

    def selectView2(self):
        arr = []
        num = self.matrix.getVertexNum()
        for a in range(0, num):
            arr.append([])
        for i in range(0, self.matrix.getVertexNum()):
            for j in range(0, self.matrix.getVertexNum()):
                arr[i].append(self.matrix.getEdgeWeight1(i, j))
        chooses = []
        choose = []
        view = []
        modulechoose = []
        roleNodeCnt = self.ui.treeWidget.topLevelItemCount()
        for i in range(0, roleNodeCnt):
            roleNode = self.ui.treeWidget.topLevelItem(i)
            if roleNode.checkState(0) == Qt.Checked or roleNode.checkState(0) == Qt.PartiallyChecked:
                modulechoose.append(roleNode.text(0))
            nameNodeCnt = roleNode.childCount()
            for j in range(0, nameNodeCnt):
                nameNode = roleNode.child(j)
                if nameNode.checkState(0) == Qt.CheckState.Checked:
                    chooses.append(nameNode.text(0))
        if (len(chooses) == 0):
            self.viewindex = 0
            QMessageBox.critical(self, "Error", "Please select SWC")
        else:
            self.viewindex = 1
            for swc in chooses:
                index_u = self.vertex_list.index(swc)
                choose.append(index_u)
            views = []
            for i in choose:
                for j in choose:
                    view.append(arr[i][j])
                views.append(view)
                view = []
            nodes = []
            nodes1 = []
            links = []
            for i in chooses:
                nindex = self.modulelist.index(self.bc_fc[i])
                nodeInfo = {"name": i, "symbolSize": 30, "category":self.bc_fc[i]}
                nodeInfo1 = {"name": i, "symbolSize": 15, "category": self.bc_fc[i]}
                nodes.append(nodeInfo)
                nodes1.append(nodeInfo1)
            for i in range(len(views)):
                for j in range(len(views)):
                    if (views[i][j] > 0):
                        links.append({"source": chooses[i], "target": chooses[j], "value": views[i][j]})
            categories = []
            for i in modulechoose:
                categories.append({"name": i})
            w = self.ui.webEngineView_view.width()
            h = self.ui.webEngineView_view.height()
            w = str(w) + 'px'
            h = str(h) + 'px'
            c = (
                pyGraph(init_opts=opts.InitOpts(width="1000px", height="600px"))
                .add("", nodes, links, categories=categories, repulsion=4000, edge_symbol=['circle', 'arrow'],
                     edge_label=opts.LabelOpts(is_show=True, position="middle", formatter="{c}"),
                     linestyle_opts=opts.LineStyleOpts(curve=0.2),
                     )
                .set_global_opts(title_opts=opts.TitleOpts(title="Relationship between SWC"),
                                 legend_opts=opts.LegendOpts(orient='vertical', pos_left='2%', pos_top='20%'),
                                 )
                .render("graph_with_options.html")
            )
            c = (
                pyGraph(init_opts=opts.InitOpts(width="1000px", height="600px"))
                .add("", nodes1, links, categories=categories,
                        layout="circular",
                        is_rotate_label=True,
                        linestyle_opts=opts.LineStyleOpts(color="source", curve=0.2),
                        label_opts=opts.LabelOpts(position="right"),
                        edge_label=opts.LabelOpts(is_show=True, position="middle", formatter="{c}"),
                     )
                .set_global_opts(title_opts=opts.TitleOpts(title="Relationship between SWC"),
                                 legend_opts=opts.LegendOpts(orient='vertical', pos_left='2%', pos_top='20%'),
                                 )
                .render("graph_with_options1.html")
            )
            self.ui.webEngineView_view.setUrl(QUrl('file:///graph_with_options.html'))
            for rowNum in range(0, self.ui.tableWidget.rowCount())[::-1]:
                self.ui.tableWidget.removeRow(rowNum)
            match = Extract.getPortInfo(self.port)
            for line in match:
                if (len(list(set(line) & set(chooses)))) == 2:
                    row = self.ui.tableWidget.rowCount()
                    self.ui.tableWidget.insertRow(row)
                    for j in range(len(line)):
                        item = QTableWidgetItem(str(line[j]))
                        self.ui.tableWidget.setItem(row, j, item)

    def change_view(self,index):
        if self.viewindex == 1:
            if index == 0:
                self.ui.webEngineView_view.setUrl(QUrl('file:///graph_with_options.html'))
            else:
                self.ui.webEngineView_view.setUrl(QUrl('file:///graph_with_options1.html'))

app = QApplication(sys.argv)
win = mainUI()
sys.exit(app.exec_())


