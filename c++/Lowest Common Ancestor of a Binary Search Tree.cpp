/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode * resultNode = NULL;
        if(((p->val>=root->val)&&(q->val<=root->val))||((p->val<=root->val)&&(q->val>=root->val))){
            resultNode = root;
        }
        if((p->val>root->val)&&(q->val>root->val)){
            resultNode = lowestCommonAncestor(root->right,p,q);
        }
        if((p->val<root->val)&&(q->val<root->val)){
            resultNode = lowestCommonAncestor(root->left,p,q);
        }
        return resultNode;
    }
};