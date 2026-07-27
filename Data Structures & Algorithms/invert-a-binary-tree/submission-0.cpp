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
    TreeNode* invertTree(TreeNode* root) {

        TreeNode* node = root;

        if(root == nullptr){
            return node;
        }

        queue<TreeNode*> nodes;
        nodes.push(node);

        while(!nodes.empty()){
            TreeNode* current = nodes.front();

            nodes.pop();

            TreeNode* left = current-> left;

            current->left = current->right;
            current->right = left;

            if(current->left != nullptr){
                nodes.push(current->left);
            }
            if(current->right != nullptr){
                nodes.push(current-> right);
            }


        }



        return node;
        
    }
};
