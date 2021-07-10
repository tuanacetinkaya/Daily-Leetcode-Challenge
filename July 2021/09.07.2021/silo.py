class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        dp = [1] * len(nums)
        
        #  |     |
        # [0,1,0,3,2,3]
        # [1,2,1,3,1,1]
        
        for right in range(1,len(nums)):
            for left in range(0,right):
                if nums[right] > nums[left]:
                    dp[right] = max(dp[left] + 1,dp[right])
        _max = 1
        for num in dp:
            _max = max(_max,num)
        
        return _max
        
