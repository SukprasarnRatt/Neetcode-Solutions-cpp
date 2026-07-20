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
    void reorderList(ListNode* head) {

        int count = 0;

        ListNode* start = head;

        while(start != nullptr){

            start = start -> next;
            count ++;
        }


        // split linked list into two parts

        int firstHalfSize = (count + 1 ) / 2;

        ListNode* firstHalf = head;
        ListNode* tailFirstHalfNode= head;

        // firstHalfSize = 3 
        for( int i = 1; i < firstHalfSize; i++){

            tailFirstHalfNode= tailFirstHalfNode -> next;

        }

        ListNode* secondHalf = tailFirstHalfNode -> next;
        tailFirstHalfNode -> next = nullptr;


        // Reversed secondHalf

        ListNode* nextNode;
        ListNode* previous = nullptr;

        while (secondHalf != nullptr){

            nextNode = secondHalf -> next;

            secondHalf -> next = previous;

            previous = secondHalf;
            secondHalf = nextNode;


        }

        secondHalf = previous;

        ListNode* nextFirst;
        ListNode* nextSecond;
        while(secondHalf != nullptr){

            nextFirst = firstHalf -> next;
            nextSecond = secondHalf -> next;

            firstHalf -> next = secondHalf;

            secondHalf -> next = nextFirst;

            firstHalf = nextFirst;
            secondHalf = nextSecond;

        }



        
    }
};
