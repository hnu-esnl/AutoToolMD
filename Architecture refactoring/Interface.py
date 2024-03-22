class Interface:
    BCName = []
    SWCName = []
    portName = []
    portType = []
    portInterface = []
    ifType = []
    IDTName = []
    isChecked = False
    def initInterface(self,BCName,SWCName,portName,portType,portInterface,ifType,IDTName):
        self.BCName = BCName
        self.SWCName = SWCName
        self.portName = portName
        self.portType = portType
        self.portInterface = portInterface
        self.ifType = ifType
        self.IDTName = IDTName
        self.isChecked = False

    def setBCName(self,BCName):
        self.BCName = BCName

    def getBCName(self):
        return self.BCName

    def setSWCName(self, SWCName):
        self.SWCName = SWCName

    def getSWCName(self):
        return self.SWCName

    def setportName(self, portName):
        self.portName = portName

    def getportName(self):
        return self.portName

    def setportType(self, portType):
        self.portType = portType

    def getportType(self):
        return self.portType

    def setportInterface(self, portInterface):
        self.portInterface = portInterface

    def getportInterface(self):
        return self.portInterface

    def setifType(self, ifType):
        self.ifType = ifType

    def getifType(self):
        return self.ifType

    def setIDTName(self, IDTName):
        self.IDTName = IDTName

    def getIDTName(self):
        return self.IDTName

    def setChecked(self, checked):
        self.isChecked = checked

    def getChecked(self):
        return self.isChecked