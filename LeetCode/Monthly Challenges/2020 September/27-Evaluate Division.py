class Solution:
    def calcEquation(self, equations: List[List[str]], values: List[float], queries: List[List[str]]) -> List[float]:
        graph = {}
        
        def build(equations, values):
            def add(u, v, val):
                if u in graph:
                    graph[u].append((v, val))
                else:
                    graph[u] = [(v, val)]
                
            for vertices, val in zip(equations, values):
                u, v = vertices
                add(u, v, val)
                add(v, u, 1/val)
        
        def find(query):
            u, v = query
            
            if u not in graph or v not in graph:
                return -1.0
            
            q = collections.deque([(u, 1.0)])
            visited = set()
            
            while q:
                front, prod = q.popleft()

                if front == v:
                    return prod

                visited.add(front)

                for neighbor, value in graph[front]:
                    if neighbor not in visited:
                        q.append([neighbor, prod * value])
                    
            return -1.0
        
        build(equations, values)
        return [find(q) for q in queries]
