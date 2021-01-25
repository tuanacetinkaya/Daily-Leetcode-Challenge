# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        val = ''
        temp = head
        while temp != None:
            val += str(temp.val)
            temp = temp.next
        result, power = 0, len(val) - 1
        for bit in val:
            result += int(bit) * pow(2, power)
            power -= 1
        return result