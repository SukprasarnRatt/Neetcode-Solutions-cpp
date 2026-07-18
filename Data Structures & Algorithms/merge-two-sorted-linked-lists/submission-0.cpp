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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* currentL1 = list1;
        ListNode* currentL2 = list2;

        ListNode* head;
        ListNode* tail;

        if (list1 == nullptr){
            return list2;
        }

        if (list2 == nullptr){
            return list1;
        }


        if(currentL1 -> val > currentL2 -> val){
            head = currentL2;
            currentL2 = currentL2->next;
        }else if (currentL1 -> val <= currentL2 -> val){
            head = currentL1;
            currentL1 = currentL1->next;
        }

        tail = head;

        while(currentL1 != nullptr && currentL2 != nullptr){
            
            if(currentL1 -> val > currentL2 -> val){
                
                tail->next = currentL2;
                tail = currentL2;


                currentL2 = currentL2 -> next;

            }else if (currentL1 -> val <= currentL2 -> val){

                tail->next = currentL1;
                tail = currentL1;

                currentL1 = currentL1 -> next;

            }
        }

        if( currentL1 == nullptr){
            tail->next = currentL2;
        }else if(currentL2 == nullptr){
            tail->next = currentL1;
        }

        return head;

    }
};
