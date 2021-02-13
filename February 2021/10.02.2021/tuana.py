class Solution:
    
    def findMaxIdx(self, nums):
        
        val, idx = -1, -1
        for i, num in enumerate(nums):
            if num > val:
                val = num
                idx = i
        return idx
    
    
    def buildTree(self, nums):
        if not nums:
            return None
        if len(nums) == 1:
            root = TreeNode(nums[0])
            return root
        
        maxIdx = self.findMaxIdx(nums)
        
        root = TreeNode(nums[maxIdx])
        root.left = self.buildTree(nums[:maxIdx])
        root.right = self.buildTree(nums[maxIdx+1:]  if maxIdx < len(nums) else [])
        return root
        
        
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        return self.buildTree(nums)
    
