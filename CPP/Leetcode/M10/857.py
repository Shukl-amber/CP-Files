import heapq
from typing import List


class Solution:
    def mincostToHireWorkers(self, quality: List[int], wage: List[int], k: int) -> float:
        workers = sorted((w / q, q) for q, w in zip(quality, wage))
        heap = []
        quality_sum = 0
        ans = float("inf")
        for ratio, q in workers:
            heapq.heappush(heap, -q)
            quality_sum += q
            if len(heap) > k:
                quality_sum += heapq.heappop(heap)
            if len(heap) == k:
                ans = min(ans, ratio * quality_sum)
        return ans
