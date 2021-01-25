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
        vector<int> vector;
        while(head != NULL){
            vector.push_back(head->val);
            head = head->next; 
        }
        int result = 0;
        for(int i = 0 ; i<vector.size() ; i++){
            result += vector[i] * pow(2,vector.size()-1-i);
        }
        return result;
    }
};
