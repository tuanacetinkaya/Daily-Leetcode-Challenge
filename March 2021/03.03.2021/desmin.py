class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        total_val = (n * (n + 1)) / 2
        for i in nums:
            total_val -= i
        return int(total_val)