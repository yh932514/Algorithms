/**********************************
//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

//Example:

//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//Explanation: 342 + 465 = 807.
//Runtime: 48 ms, faster than 71.19% of C++ online submissions for Add Two Numbers.
**********************************/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* ptr = head;
        int units = 0, tens = 0; 
        while(l1 != NULL || l2!=NULL)
        {
            if(l1 != NULL && l2 != NULL){
                units = (l1->val+l2->val+tens)%10;
                ptr->next = new ListNode(units);
                tens = (tens+l1->val+l2->val)/10;
                ptr = ptr->next; 
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 == NULL && l2 != NULL){
                units = (l2->val+tens)%10;
                ptr->next = new ListNode(units);
                tens = (l2->val+tens)/10;
                ptr = ptr->next; 
                l2 = l2->next;
            }
            else if (l2 == NULL && l1 != NULL){
                units = (l1->val+tens)%10;
                ptr->next = new ListNode(units);
                tens = (l1->val+tens)/10;
                ptr = ptr->next; 
                l1 = l1->next;
            }
        }
        if(tens!=0){
            ptr->next = new ListNode(tens);
            ptr = ptr->next;
            tens = 0;
        }
     ptr = head->next;
     delete head;  
     return ptr;  
    }
};
