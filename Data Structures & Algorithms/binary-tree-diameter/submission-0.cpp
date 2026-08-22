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
int dia = 0;
    int hello(TreeNode* root){
        if(root == nullptr) return 0;

        int left = hello(root->left);
        int right = hello(root->right);

        dia = max(dia,left + right);

        return 1 + max(left,right);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        hello(root);
        return dia;
    }
};
