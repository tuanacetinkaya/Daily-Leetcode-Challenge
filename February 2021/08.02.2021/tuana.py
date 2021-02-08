class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        rs = 0
        nl = []
        for i in nums:
            rs += i
            nl.append(rs)
        return nl
