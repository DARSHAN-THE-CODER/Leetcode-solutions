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
    int check(TreeNode* head, int val, int &count)
    {
        if(head==NULL)
            return 0;
        if(head->val>=val)
        {
            count++;
            val=head->val;
        }
        check(head->left, val, count);
        check(head->right, val, count);
        return count;
    }
    int goodNodes(TreeNode* root) {
        int count=0;
        int ans=check(root, root->val,count );
        return ans;
    }
};