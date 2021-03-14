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
        auto temp = head;
        int n = 0;
        while (temp != nullptr) {
            temp = temp->next;
            n++;
        }
        temp = head;
        int ct = 1;
        int a = -1, b = -1;
        while (temp != nullptr) {
            
            if (ct == k) {
                a = temp->val;
            }
            if (ct == n - k + 1) {
                b = temp->val;
            }
            temp = temp->next;
            ct++;
        }
        temp = head;
        ct = 1;
        while (temp != nullptr) {
            
            if (ct == k) {
                temp->val = b;
            }
            if (ct == n - k + 1) {
                temp->val = a;
            }
            temp = temp->next;
            ct++;
        }
        return head;
    }
};
