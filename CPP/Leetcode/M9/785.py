from collections import deque
from typing import List


class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        color = {}
        for start in range(len(graph)):
            if start in color:
                continue
            queue = deque([start])
            color[start] = 0
            while queue:
                node = queue.popleft()
                for nei in graph[node]:
                    if nei not in color:
                        color[nei] = 1 - color[node]
                        queue.append(nei)
                    elif color[nei] == color[node]:
                        return False
        return True
