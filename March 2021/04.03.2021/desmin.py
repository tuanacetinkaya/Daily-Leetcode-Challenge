# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        lengths = [0, 0]
        i = 0
        for temp in [headA, headB]:
            while temp != None:
                lengths[i] += 1
                temp = temp.next
            i += 1
        
        
        tempA, tempB = headA, headB
        if max(lengths) is lengths[0]: # listA is longer
            for i in range(abs(lengths[0]-lengths[1])):
                tempA = tempA.next
        else: # listB is longer
            for i in range(abs(lengths[0]-lengths[1])):
                tempB = tempB.next
        
        while tempA and tempB and tempA != tempB:
            tempA = tempA.next
            tempB = tempB.next
        
        if tempA is None:
            return None
        else:
            return tempA