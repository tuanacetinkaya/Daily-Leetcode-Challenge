
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ArrayList<ListNode> nodes = new ArrayList<ListNode>();
        while(headA != null){
            nodes.add(headA);
            headA = headA.next;
        }
        while(headB != null){
            if(nodes.contains(headB)){
                return headB;
            }
            headB = headB.next;
        }
        return null;
    }
}
