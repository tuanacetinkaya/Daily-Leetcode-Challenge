class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        mylist = []
        for i in candies:
            if (i+extraCandies) >= max(candies):
                mylist.append(True)
            else:
                mylist.append(False)
        return mylist