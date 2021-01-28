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
class Solution 
{
public:
	int getDecimalValue(ListNode* head)
	{
        ListNode *temp;
        temp = new ListNode;
        temp = head; 
            
        int list_size{};
        while(temp->next != nullptr)
        {
            list_size++;
            temp = temp->next;
        }
        
        int decimal_value{};
		while(head)
		{
			decimal_value += head->val * pow(2, list_size);
			head = head->next;
           	        list_size--;
		}
		return decimal_value;
	}
};
