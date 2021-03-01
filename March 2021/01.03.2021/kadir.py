class Solution:
    def distributeCandies(self, candyType: List[int]) -> int:
        if len(set(candyType)) > (len(candyType)/2):
            return int(len(candyType)/2)
        else:
            return len(set(candyType))