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
TreeNode* ans = 0;
void hello(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root == p || root == q)ans= root;
        if(root->val < p->val && root->val < q->val)hello(root->right, p,q);
        else if( root-> val > q->val)hello(root-> left, p , q);
        else if(p->val < root->val && root->val < q->val)ans= root;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(p->val<q->val)hello(root, p, q);
       if(p->val>q->val)hello(root, q, p);
       return ans;
    }
};
