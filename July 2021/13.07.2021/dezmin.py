class Solution:
    def findPeakElement(self, nums) -> int:
        n = len(nums)
        if n == 1:
            return 0
        elif n == 2:
            return 0 if nums[0] > nums[1] else 1    
        left, right = 0, n - 1
        while (right >= left):
            if right - left + 1 == 2 or right == left:
                return right if nums[right] > nums[left] else left
            i = (left + right) // 2
            num = nums[i]
            if (num > nums[i - 1] and num > nums[i + 1]):
                return i
            if num < nums[i - 1]:
                right = i - 1
            else:
                left = i + 1
