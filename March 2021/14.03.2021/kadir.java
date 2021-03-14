/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        int a = 0;
        int first = 0;
        int second = 0;
        ListNode curr = head;
        while(curr != null){
            if(a == k-1){
                first = curr.val;
            }
            a++;
            curr = curr.next;
        }
        int secInd = a - k;
        a = 0;
        curr = head;
        while(curr != null){
            if(a == secInd){
                second = curr.val;
            }
            a++;
            curr = curr.next;
        }
        curr = head;
        a = 0;
        while(curr != null){
            if(a == k-1){
                curr.val = second;
            }            
            if(a == secInd){
                curr.val = first;
            }
            a++;
            curr = curr.next;
        }
        return head;
    }
}
