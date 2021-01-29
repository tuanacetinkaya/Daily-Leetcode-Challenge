class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        piles.sort()
        total = 0
        for i in range(len(piles)-2, int(len(piles)/3)-1,-2):
            total += piles[i]
        return total