class Graph:
    def __init__(self):
        self.graph = {}

   
    def add_edge(self, u, v):
        if u not in self.graph:
            self.graph[u] = []
        if v not in self.graph:
            self.graph[v] = []
        self.graph[u].append(v)
        self.graph[v].append(u)  

 
    def print_graph(self):
        for node, neighbors in self.graph.items():
            print(f"{node}: {', '.join(map(str, neighbors))}")



graph = Graph()
graph.add_edge(0, 1)
graph.add_edge(0, 2)
graph.add_edge(1, 2)
graph.add_edge(2, 3)

graph.print_graph()
