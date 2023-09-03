class Solution {
public:
    void solve(int ind,vector<int> &v, vector<vector<int>> &ans , vector<int> temp){
        if(ind == v.size()){
            ans.push_back(temp);
            return;
        }
        solve(ind+1,v,ans,temp);
        temp.push_back(v[ind]);
        solve(ind+1,v,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        solve(0,nums,ans,temp);
        return ans;
    }
};