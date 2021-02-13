# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findBottomLeftValue(self, root: TreeNode) -> int:
        # breadth first search probably
        queue = [] # node: isLeft
        queue.append(root)
        
        nodes = []
        while True:
            if len(queue) == 0:
                break
            lefties = []
            righties = []
            
            tracker = queue.pop(0)
                        
            nodes.append(tracker.val)
            if tracker.right:
                queue.append(tracker.right)
                righties.append(tracker.right.val)
            if tracker.left:
                queue.append(tracker.left)
                lefties.append(tracker.left.val)
            
        return lefties[-1] if lefties else righties[-1] if righties else nodes[-1]
