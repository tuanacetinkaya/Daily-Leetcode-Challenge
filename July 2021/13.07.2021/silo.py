class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        if len(nums) == 2 or len(nums) == 1 or len(nums) == 3:
            return nums.index(max(nums))
        
        _max = nums[0]
        index = 0
        
        for i in range(1,len(nums) - 1):
            left = nums[i-1]
            mid = nums[i]
            right = nums[i+1]
            
            
            
            if mid > left and right < mid and mid > _max:
                _max = mid
                index = i
            
            if i == len(nums) - 2 and right > _max:
                index = i+1
        
        return index
            
