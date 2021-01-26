/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

using System.Collections;

public class Solution {
    public int GetDecimalValue(ListNode head) {
        Stack<int> leastToMostSignificantBit = new Stack<int>();
        
        while (head != null){
            leastToMostSignificantBit.Push(head.val);
            head=head.next;
        }
        
        int power = 0;
        int totalDecimalValue = 0;
        while(leastToMostSignificantBit.Count != 0){
            int bit = leastToMostSignificantBit.Pop();
            if (bit==1)
                totalDecimalValue+= (int)Math.Pow(2, power) * bit;
            power++;
        }
        return totalDecimalValue;
    }
}