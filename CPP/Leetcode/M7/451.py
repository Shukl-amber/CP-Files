class Solution:
    def frequencySort(self, s: str) -> str:
        count = {}
        for c in s:
            count[c] = count.get(c, 0) + 1
        sorted_chars = sorted(count, key=lambda x: -count[x])
        return ''.join(c * count[c] for c in sorted_chars)
