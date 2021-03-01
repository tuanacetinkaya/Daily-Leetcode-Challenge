class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        candySet = set(candyType)
        limit = len(candyType) // 2
        types = len(candySet)
        if types >= limit:
            return limit
        return types
