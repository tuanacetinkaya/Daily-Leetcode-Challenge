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
        int ret = 0;
        vector<int> vec;
        while (head) {
            vec.push_back(head->val);
            head = head->next;
        }
        int k = 1;
        while (!vec.empty()) {
            ret += vec.back() * k;
            k *= 2;
            vec.pop_back();
        }
        return ret;
    }
};
