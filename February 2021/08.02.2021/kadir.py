class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        mylist = []
        for i in range(len(nums)):
            mylist.append(sum(nums[:i+1]))
        return mylist