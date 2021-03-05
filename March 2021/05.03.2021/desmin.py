# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def __init__(self):
        self.elem_dict = []
        self.total_count = []
    
    def averageOfLevels(self, root: TreeNode) -> List[float]:
        self.traverse(root, 0)
        
        n = len(self.total_count)
        ans = [0] * n
        for i in range(n):
            ans[i] = self.elem_dict[i] / self.total_count[i]
        
        return ans
        
    def traverse(self, node: TreeNode, current_level: int):
        if not node:
            return
        
        if len(self.total_count) < current_level + 1:
            self.total_count.append(0)
            self.elem_dict.append(0)
        
        self.elem_dict[current_level] += node.val
        self.total_count[current_level] += 1
        
        self.traverse(node.left, current_level + 1)
        self.traverse(node.right, current_level + 1)