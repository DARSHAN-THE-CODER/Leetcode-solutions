class Solution {
public:
    int helper(vector<int> temp, int index, vector<int> &dp){
        if(index == 0) return temp[index];
        if(index < 0) return 0;
        if(dp[index] != -1) return dp[index];
        int pick = temp[index] + helper(temp, index-2, dp);
        int notPick = helper(temp, index-1, dp);
        return dp[index]=max(pick,notPick);
    } 

    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return helper(nums, nums.size()-1, dp);
    }
};