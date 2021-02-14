class Solution:
    
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        #thats a bst sooooo smallest node is the left most node
        value = 0
        stack = [] # depth first search to reach the left most node
        while root or stack:
            while root:
                stack.append(root)
                root = root.left
            
            root = stack.pop()
            k -= 1
            
            if not k:
                return root.val
            root = root.right
