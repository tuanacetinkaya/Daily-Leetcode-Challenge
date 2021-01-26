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
    int getDecimalValue(ListNode* head) {
        int size = 0;
        ListNode* current = head;
        while (current != nullptr) {
            size++;
            current = current -> next;
        }
        size--;
        int result = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            if (temp->val == 0) size--;
            else {
                result += pow(2, size);
                size--;
            }
            temp = temp -> next;
        }
        return result;
    }
};
