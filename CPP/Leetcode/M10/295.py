import heapq


class PriorityQueue:
    def __init__(self):
        self.heap = []

    def insert(self, val: int) -> None:
        heapq.heappush(self.heap, -val)

    def delete(self) -> int:
        return -heapq.heappop(self.heap)

    def peek(self) -> int:
        return -self.heap[0]

    def isEmpty(self) -> bool:
        return len(self.heap) == 0
