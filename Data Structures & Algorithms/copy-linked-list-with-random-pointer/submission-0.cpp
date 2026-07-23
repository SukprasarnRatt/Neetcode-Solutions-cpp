/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* original = head;
        Node* copy = nullptr;
        unordered_map <Node*, Node*> tracking;


        while(original != nullptr){
            Node* copyNode = new Node(original -> val);
            tracking[original] = copyNode;

            original = original -> next;
        }

        for(auto& pair: tracking){

            if(pair.first-> next != nullptr){

                pair.second -> next = tracking[pair.first-> next];
            }
            if(pair.first-> random != nullptr){

                pair.second -> random = tracking[pair.first-> random];
            }
        }

        return tracking[head];
        
    }
};
