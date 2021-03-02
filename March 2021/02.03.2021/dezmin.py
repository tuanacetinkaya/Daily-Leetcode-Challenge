class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        nums2 = [0] * len(nums)
        ans = [0, 0]
        for i in nums:
            nums2[i - 1] += 1
        for i in range(len(nums2)):
            if nums2[i] == 2:
                ans[0] = i + 1
            elif nums2[i] == 0:
                ans[1] = i + 1
        return ans