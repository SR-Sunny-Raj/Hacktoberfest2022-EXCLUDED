Problem Link -: https://leetcode.com/problems/add-two-numbers/
Solution -:

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr = new ListNode();     //new list;
        ListNode *temp = ptr;
        
        int c = 0;
		//traversing both list till one of the list not reaches NULL
        while (l1 != NULL ||  l2 != NULL || c)
        {
            int sum = 0;
			// if l1  is not null
			// add l1-> value to sum
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1 -> next;
            }
            
			// if l2  is not null
			// add l2-> value to sum
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2 -> next;
            }
            
			// add carry to sum
            sum += c;
			// carry is updated by sum/10 because for 18 , 
			// 18 / 10 is 1 which is the carry
            c = sum/10;
			// add sum% 10 to new node as it containg the sum
            ListNode *node = new ListNode(sum%10);
            temp -> next = node;
            temp = temp -> next;
        }
        return ptr -> next;
    }
};
