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

private:
    int diameters = 0;
    int dfs(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        
        int leftHeight = dfs(node -> left);

        int rightHeight = dfs(node -> right);

        diameters = max(diameters, leftHeight + rightHeight);

        return 1+ max(leftHeight,rightHeight);
    }
public:

    int diameterOfBinaryTree(TreeNode* root) {

        TreeNode* nodes = root;

        return (dfs(nodes),diameters);


        
    }
};
