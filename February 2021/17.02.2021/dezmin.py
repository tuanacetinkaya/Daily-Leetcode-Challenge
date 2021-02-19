# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:   
    
    max_height = 0
    total_sum = 0
    
    def __init__(self):
        max_height = 0
        total_sum = 0
    
    def deepestLeavesSum(self, root: TreeNode) -> int:
        self.get_tree_depth(root, 0)
        self.traverse_tree(root, 0)
        return self.total_sum

    def get_tree_depth (self, node : TreeNode, height : int):
        self.max_height = max(self.max_height, height)

        if node.left != None:
            self.get_tree_depth (node.left, height + 1)
        if node.right != None:
            self.get_tree_depth (node.right, height + 1)
    
    def traverse_tree (self, node : TreeNode, height: int):
        if height == self.max_height:
            self.total_sum += node.val
        else:
            if node.left != None:
                self.traverse_tree (node.left, height + 1)
            if node.right != None:
                self.traverse_tree (node.right, height + 1)
    

    
