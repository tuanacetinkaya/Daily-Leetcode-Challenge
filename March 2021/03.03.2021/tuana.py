class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        #total sum of the numbers minus each element
        total = 0
        maximum = -1
        
        for i in nums:
            total += i
            maximum = max(maximum, i)
            
        #calculate all sum
        calc = ((0 + maximum)* (maximum+1))//2
        return calc - total if maximum == len(nums) else maximum + 1 
