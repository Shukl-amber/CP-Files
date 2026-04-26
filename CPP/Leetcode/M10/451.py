from collections import Counter


class Solution:
    def frequencySort(self, s: str) -> str:
        counts = Counter(s)
        chars = sorted(counts.items(), key=lambda x: x[1], reverse=True)
        return "".join(ch * freq for ch, freq in chars)
