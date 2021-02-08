class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        #find greatest
        greatest = 0
        for i in candies:
            greatest = max(greatest, i)
        
        res = []
        for i in candies:
            if i + extraCandies >= greatest:
                res.append(True)
            else:
                res.append(False)
        return res
