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
    void traversal(TreeNode* root,vector<int> &ans){
        if(root==NULL)
            return;
        traversal(root->left,ans);
        ans.push_back(root->val);
        traversal(root->right,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> ans;
        traversal(root,ans);
        int index = find(ans.begin(),ans.end(),low) - ans.begin();
        // cout<<"index is :"<<index<<endl;
        int sol=0;
        while(ans[index-1]!=high){
            sol+=ans[index];
            index++;
        }
        return sol;
        // sort(ans.begin(),ans.end());
        // for(int i=0;i<ans.size();i++){
        //     cout<<"-> "<<ans[i]<<endl;
        // }
        // cout<<"bs "<<binary_search(ans.begin(),ans.end(),low)<<endl;
        // cout<<"x is"<<x<<endl;
        // return 1;
    }
};