# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        inOrder = []
        stack = []
        # track left most node
        while root or stack:
            if root:
                stack.append(root)
                root = root.left
            else:
                #left most node first
                temp = stack.pop()
                inOrder.append(temp.val)
                root = temp.right
        return inOrder
    
