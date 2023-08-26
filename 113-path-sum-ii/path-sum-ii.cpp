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
    void preOrder(TreeNode* root, vector<vector<int>> &ans, int sum, int targetSum, vector<int> temp){
        if(root == NULL) return;
        sum = sum+root->val;
        temp.push_back(root->val);

        if(root->left == NULL && root->right == NULL && sum == targetSum){
            ans.push_back(temp);
            return;
        }
        preOrder(root->left, ans, sum, targetSum, temp);
        preOrder(root->right, ans, sum, targetSum, temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(root == NULL) return ans;

        preOrder(root, ans, 0, targetSum, temp);
        return ans;
    }
};