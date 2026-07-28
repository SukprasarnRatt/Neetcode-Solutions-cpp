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
    int maxDepth(TreeNode* root) {


        if(root == nullptr){
            return 0;
        }
        TreeNode* node = root;

        queue<TreeNode*> nodes;

        nodes.push(root);

        int depth = 0;

        int levelSize;

        while(!nodes.empty()){

            levelSize = nodes.size();
            for(int i=0; i < levelSize; i++){

                TreeNode* current = nodes.front();
                nodes.pop();

                if(current->left != nullptr){
                    nodes.push(current->left);
                }

                if(current->right != nullptr){
                    nodes.push(current->right);
                }
            }

            depth++;

        }

        return depth;
        
    }
};
