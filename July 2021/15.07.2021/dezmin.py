class Solution:
    
    def triangleNumber(self, nums: List[int]) -> int:
        count = 0
        n = len(nums)
        sorted_nums = sorted(nums)
        
        for i in range(n-1, 1, -1):
            left, right = 0, i - 1
            while (left < right):
                if sorted_nums[left] + sorted_nums[right] > sorted_nums[i]:
                    count += right - left
                    right -= 1
                else:
                    left += 1
        
        return count
