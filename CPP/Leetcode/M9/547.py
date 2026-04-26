from typing import List


class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = set()

        def dfs(node):
            for nei in range(n):
                if isConnected[node][nei] == 1 and nei not in visited:
                    visited.add(nei)
                    dfs(nei)

        count = 0
        for i in range(n):
            if i not in visited:
                visited.add(i)
                dfs(i)
                count += 1
        return count
