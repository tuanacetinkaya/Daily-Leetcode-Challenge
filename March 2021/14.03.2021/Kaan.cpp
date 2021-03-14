/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        int size = 0;
        int firstValue = -1;
        
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            if(size == k){
                firstValue = temp->val;
            }
            temp = temp->next;
        }
        
        int secondValue = -1;
         temp = head;
        for(int i = 0 ;i<size-k;i++){
            temp = temp->next;
        }
        secondValue = temp->val;
        
        temp->val = firstValue;
    
        temp = head;
        for(int i = 0 ;i<k-1;i++){
            temp = temp->next;
        }
        temp->val = secondValue;
        return head; 
    }
};
