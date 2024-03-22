class GraphMatrix:
    def __init__(self,MaxNum,Vertex,VertexNum,EdgeNum,EdgeWeight):

        self.MaxNum = 200
        self.Vertex = []
        self.VertexNum = 0
        self.EdgeNum = 0
        #EdgeWeight = [MaxNum][MaxNum]
        self.EdgeWeight = []

        for i in range(0, self.MaxNum):
            self.EdgeWeight.append([])
            for j in range(self.MaxNum):
                self.EdgeWeight[i].append(0)
    def setVertexNum(self, vertexNum):
        self.VertexNum = vertexNum
    def getVertexNum(self):
        return self.VertexNum
    def getVertex(self):
        return self.Vertex
    def getVertex1(self, i):
        return self.Vertex[i]
    def getEdgeWeight1(self, i, j):
        return self.EdgeWeight[i][j]
    def getEdgeWeight(self):
        return self.EdgeWeight