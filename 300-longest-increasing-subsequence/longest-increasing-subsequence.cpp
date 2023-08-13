class Solution {
public:
    int helper(int index, int prevInd, vector<vector<int>> &dp, vector<int>& nums){
        // if(index == 0 || prevInd == 0) return 1;
        if(index >= nums.size()) return 0;
        if(dp[index][prevInd+1] != -1) return dp[index][prevInd+1]; 
        int take=0, notTake;
        if(prevInd == -1 || nums[index]>nums[prevInd]){
            take = 1+helper(index+1, index, dp, nums);
        }
        notTake = 0+helper(index+1, prevInd, dp, nums);
        return dp[index][prevInd+1] = max(take, notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return helper(0, -1, dp, nums);
    }
};