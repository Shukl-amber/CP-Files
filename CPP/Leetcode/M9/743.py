import heapq
from collections import defaultdict
from typing import List


class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = defaultdict(list)
        for u, v, w in times:
            graph[u].append((v, w))
        dist = {i: float("inf") for i in range(1, n + 1)}
        dist[k] = 0
        heap = [(0, k)]
        while heap:
            d, node = heapq.heappop(heap)
            if d > dist[node]:
                continue
            for nei, w in graph[node]:
                if dist[node] + w < dist[nei]:
                    dist[nei] = dist[node] + w
                    heapq.heappush(heap, (dist[nei], nei))
        max_dist = max(dist.values())
        return max_dist if max_dist < float("inf") else -1
