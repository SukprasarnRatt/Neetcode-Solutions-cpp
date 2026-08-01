/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {

        TreeNode* nodes1 = p;
        TreeNode* nodes2 = q;

        queue <TreeNode*> first;
        queue <TreeNode*> second;

        first.push(nodes1);
        second.push(nodes2);


        while(!first.empty() && !second.empty()){

            TreeNode* node1 = first.front();
            first.pop();
    
            TreeNode* node2 = second.front();
            second.pop();

            if(node1 == nullptr && node2 != nullptr){
                return false;
            }
            if(node1 != nullptr && node2 == nullptr){
                return false;
            }

            if(node1 == nullptr && node2 == nullptr){
                continue;
            }

            if(node1-> val != node2 -> val){
                return false;
            }

           
            first.push(node1->right);
            first.push(node1->left);

           
            second.push(node2->right);
            second.push(node2->left);
            

        }

        return true;
        
    }
};
