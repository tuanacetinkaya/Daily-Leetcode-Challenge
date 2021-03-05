# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: TreeNode) -> List[float]:
        # bfs
        average = []
        nodes = [root]
        vals = [root.val]
        while nodes:
            
            average.append(sum(vals)/len(vals))
            #used vals to limit layers
            for i in range(len(vals)):
                if nodes[i].right: 
                    nodes.append(nodes[i].right)
                if nodes[i].left: 
                    nodes.append(nodes[i].left)  
            # get rid of the past nodes
            for i in vals:
                nodes.pop(0)
            # reset the vals
            vals = []
            # append new vals
            for i in nodes:
                vals.append(i.val)
        return average
            
        
