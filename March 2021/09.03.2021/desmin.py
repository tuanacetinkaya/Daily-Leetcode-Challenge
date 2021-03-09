# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def traverse(self, node: TreeNode, level: int, target_level: int, value: int):
        if not node:
            return
        if level + 1 == target_level:
            temp_left = node.left
            temp_right = node.right
            
            left_new = TreeNode(value, temp_left, None)
            right_new = TreeNode(value, None, temp_right)
            
            node.left = left_new
            node.right = right_new
            return
        
        self.traverse(node.right, level + 1, target_level, value)
        self.traverse(node.left, level + 1, target_level, value)
            
            
    def addOneRow(self, root: TreeNode, v: int, d: int) -> TreeNode:
        
        if d == 1:
            new_root = TreeNode(v, root, None)
            return new_root
        else:
            self.traverse(root, 1, d, v)
            return root