/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        ListNode pointerA = headA;
        ListNode pointerB = headB;
        
        int aLen = 0;
        int bLen = 0;
        

        
        while(pointerA != null){
            aLen += 1;
            pointerA = pointerA.next;
        }
        
        while(pointerB != null){
            bLen += 1;
            pointerB = pointerB.next;
        }
        
        if(aLen > bLen){
            
            int diffrence = aLen-bLen;
            
            for(int i = 0 ; i<diffrence ; i++){
                headA = headA.next;
            }
        }
        else{
            int diffrence = bLen -aLen;
            for(int i = 0 ; i<diffrence;i++){
                headB = headB.next;
            }
        }
        
        while(headA != headB ){
            headA = headA.next;
            headB = headB.next;
        }
        
        return headA;
        
    }
}
