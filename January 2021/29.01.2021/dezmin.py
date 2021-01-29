class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        sorted_piles = sorted(piles)
        n = len(piles) // 3
        total = 0
        for i in range(n):
            total += sorted_piles[3*n - 1 - i * 2 - 1]
        return total