class Port:
    swcName = []
    shortName = []
    portType = []
    portInterface = []
    ifType = []
    def initPort(self, swc, short, type, interface, ift):
        self.swcName = swc
        self.shortName = short
        self.portType = type
        self.portInterface = interface
        self.ifType = ift
    def setSwcName(self,swc):
        self.swcName = swc
    def getSwcname(self):
        return self.swcName
    def setShortName(self, short):
        self.shortName = short
    def getShortName(self):
        return self.shortName
    def setPortType(self, type):
        self.portType = type
    def getPortType(self):
        return self.portType
    def setPortInterface(self, interface):
        self.portInterface = interface
    def getPortInterface(self):
        return self.portInterface
    def setIfType(self, ifp):
        self.ifType = ifp
    def getIfType(self):
        return self.ifType
    def setImplicit(self,plicit):
        self.Implicit = plicit
    def getImplicit(self):
        return self.Implicit