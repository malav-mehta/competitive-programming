import re
from sys import stdin
input = stdin.readline

# Use regex for finding links
link_format = re.compile('<A HREF=\"([^\"]*)\">')


class Graph:  # Directed Graph
    def __init__(self, V):
        self.V = V
        self.E = 0
        self.edges = {}

    def get_v(self):
        return self.V

    def get_e(self):
        return self.E

    def add_edge(self, v, u):
        self.edges[v] = self.edges.get(v, []) + [u]
        self.E += 1

    def adj(self, v):
        return self.edges.get(v, [])


class DFS:  # Depth-First Search
    def __init__(self, G, v):
        self.visited = set()
        self.dfs(G, v)

    def dfs(self, G, v):
        self.visited.add(v)
        for u in G.adj(v):
            if u not in self.visited:
                self.dfs(G, u)

    def has_path_to(self, u):
        return u in self.visited


n = int(input())
G = Graph(n)

for _ in range(n):
    from_ = input().strip()
    current_line = input().strip()

    while "</HTML>" not in current_line:
        for to_ in re.findall(link_format, current_line):
            G.add_edge(from_, to_)
            print("Link from {0} to {1}".format(from_, to_))

        current_line = input().strip()

while True:
    from_ = input().strip()

    if from_ == 'The End':
        break

    to_ = input().strip()

    # Search link paths
    search = DFS(G, from_)

    if (search.has_path_to(to_)):
        print("Can surf from {0} to {1}.".format(from_, to_))
    else:
        print("Can't surf from {0} to {1}.".format(from_, to_))
