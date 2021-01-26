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
#include<cmath>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int arr[31];
        int i = 0;
        int value = 0;
        int total = 0;
        ListNode* ptr = head;
        while(ptr){
            arr[i] = ptr->val;
            ptr = ptr->next;
            i++;
        }
        for(int a=0; a<=i;a++){
            if(arr[i-a] == 1){
                value = pow(2,a);
                total += value;
            }
            else{
                continue;
            }
        }
        return total/2;
    }
};

