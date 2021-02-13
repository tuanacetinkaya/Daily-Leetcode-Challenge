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
