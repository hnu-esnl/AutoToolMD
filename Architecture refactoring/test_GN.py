
import random
import networkx as nx

import igraph

def load_graph(data1,weight1):
    G = nx.Graph()
    for i in data1:
        G.add_edge(i[0],i[1],weight = weight1[data1.index(i)])
    return G

def clone_graph(G):
   cloned_graph = nx.Graph()
   for edge in G.edges():
       cloned_graph.add_edge(edge[0], edge[1],weight = G.get_edge_data(edge[0], edge[1])['weight'])
   return cloned_graph


def cal_Q(partition, G):
   m = len(list(G.edges()))
   a = []
   e = []

   for community in partition:
       t = 0
       for node in community:
           t += len(list(G.neighbors(node)))
       a.append(t / float(2 * m))

   for community in partition:
       t = 0
       for i in range(len(community)):
           for j in range(len(community)):
               if i != j:
                   if G.has_edge(community[i], community[j]):
                       t += 1
       e.append(t / float(2 * m))

   q = 0
   for ei, ai in zip(e, a):
       q += (ei - ai ** 2)

   return q


def cal_Q_weighted(partition, G):
    m = sum(weight for _, _, weight in G.edges(data='weight'))
    a = []
    e = []

    for community in partition:
        t = 0
        for node in community:
            t += sum(weight for _, _, weight in G.edges(node, data='weight'))
        a.append(t / float(2 * m))

    for community in partition:
        t = 0
        for i in range(len(community)):
            for j in range(len(community)):
                if i != j:
                    if G.has_edge(community[i], community[j]):
                        weight = G[community[i]][community[j]]['weight']
                        t += weight
        e.append(t / float(2 * m))

    q = 0
    for ei, ai in zip(e, a):
        q += (ei - ai ** 2)

    return q

def compute_intra_community_connectivity(G, communities):
    avg_weights = []
    for community in communities:
        total_weight = sum(G.get_edge_data(u,v)['weight'] for u, v in nx.edges(G, community))
        avg_weight = total_weight / len(community)
        avg_weights.append(avg_weight)
    return avg_weights

def compute_inter_community_separability(G, communities):
    avg_weights = []
    for i in range(len(communities)):
        for j in range(i+1, len(communities)):
            edges = [(u, v) for u in communities[i] for v in communities[j] if G.has_edge(u, v)]
            total_weight = sum(G.get_edge_data(u,v)['weight'] for u, v in edges)
            avg_weight = total_weight / (len(communities[i]) * len(communities[j]))
            avg_weights.append(avg_weight)
    return avg_weights


colors = []
def get_color():
   global colors
   colorArr = ['1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
   color = ""
   for i in range(6):
       color += colorArr[random.randint(0,14)]
   if color in colors:
       color = get_color()
       if len(colors)==50:
           colors = []
   else:
       colors.append(color)
   return color


class GN(object):
    """docstring for GN"""

    def __init__(self, G, modulenumber):
        self._G_cloned = clone_graph(G)
        #self._G_cloned = G
        self._G = G
        self._partition = [[n for n in G.nodes()]]
        self._max_Q = 0.0
        self._modulenumber = modulenumber

    def execute(self):
        while len(self._G.edges()) > 0:
            edge_weight = nx.edge_betweenness_centrality(self._G)
            edge = max(nx.edge_betweenness_centrality(self._G).items(),key=lambda item: item[1])[0]
            self._G.remove_edge(edge[0], edge[1])
            components = [list(c) for c in list(nx.connected_components(self._G))]
            if len(components) != len(self._partition):
                cur_Q = cal_Q_weighted(components, self._G_cloned)
                if cur_Q > self._max_Q:
                    self._max_Q = cur_Q
                    self._partition = components
            if self._modulenumber == len(components):
                cur_Q = cal_Q_weighted(components, self._G_cloned)
                return components, cur_Q
                break
        return self._partition, self._max_Q





