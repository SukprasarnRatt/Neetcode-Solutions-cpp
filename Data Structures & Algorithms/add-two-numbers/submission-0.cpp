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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        ListNode* firstList = l1;
        ListNode* secondList = l2;

        int carry = 0;

        while(firstList != nullptr or secondList != nullptr or carry != 0){

            if(firstList != nullptr and secondList != nullptr){

                current -> next = new ListNode();
                current = current -> next;

                int sum = firstList -> val + secondList -> val + carry;
                int result = sum % 10;
                carry = sum / 10;

                current->val = result;

                firstList = firstList -> next;
                secondList = secondList -> next;
                
            }else if(firstList != nullptr and secondList == nullptr){

                current -> next = new ListNode();
                current = current -> next;

                int sum = firstList -> val + carry;
                int result = sum % 10;
                carry = sum / 10;

                current->val = result;

                firstList = firstList -> next;

            }else if(firstList == nullptr and secondList != nullptr){

                current -> next = new ListNode();
                current = current -> next;

                int sum = secondList -> val + carry;
                int result = sum % 10;
                carry = sum / 10;

                current->val = result;

                secondList = secondList -> next;

            }else if(firstList == nullptr and secondList == nullptr and carry != 0){
                current -> next = new ListNode();
                current = current -> next;

                current->val = carry;

                carry = 0;
            }

        }

        return dummy -> next;
        
    }
};
