import heapq
from typing import List


class Solution:
	def minOperations(self, nums: List[int], k: int) -> int:
		heapq.heapify(nums)
		ops = 0
		while len(nums) >= 2 and nums[0] < k:
			x = heapq.heappop(nums)
			y = heapq.heappop(nums)
			heapq.heappush(nums, 2 * min(x, y) + max(x, y))
			ops += 1
		return ops
