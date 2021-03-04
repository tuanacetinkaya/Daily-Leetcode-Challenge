/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> us;
        auto tempA = headA;
        auto tempB = headB;
        
        while (tempA) {
            us.insert(tempA);
            tempA = tempA->next;
        }
        
        while (tempB) {
            if (us.count(tempB)) {
                return tempB;
            }
            tempB = tempB->next;
        }
        return nullptr;
    }
};
