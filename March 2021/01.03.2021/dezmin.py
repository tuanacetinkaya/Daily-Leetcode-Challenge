class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        candy_types = len(set(candyType))
        return min(candy_types, len(candyType)//2)