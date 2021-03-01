class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        s = set()
        for x in candyType:
            s.add(x)
        
        return min(len(s), len(candyType) // 2)
