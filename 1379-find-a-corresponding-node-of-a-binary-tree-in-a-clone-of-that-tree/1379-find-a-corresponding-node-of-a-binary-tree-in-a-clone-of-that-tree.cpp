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
    void traversal(TreeNode* original, TreeNode* cloned, TreeNode* target, TreeNode* &ans)
    {
        if(original==NULL)
            return;
        traversal(original->left,cloned->left,target,ans);
        if(original->val == target->val)
            ans=cloned;
        traversal(original->right,cloned->right,target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = new TreeNode();
        traversal(original,cloned,target,ans);
        return ans;
    }
};