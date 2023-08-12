class Solution {
public:
    bool helper(int index, int target, vector<vector<int>> &dp,vector<int>& nums  ){
        if(target == 0) return true;
        if(index<0) return false;
        if(index == 0) return nums[index] == target;
        if(dp[index][target] != -1) return dp[index][target];

        bool take = false, notTake;
        if( target -nums[index]>=0){
            take = helper(index-1, target - nums[index], dp, nums);
        }
        notTake = helper(index-1, target, dp, nums);
        return dp[index][target] = take || notTake;
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(auto it:nums){
            totalSum+=it;
        }
        if(totalSum % 2 != 0) return false;

        vector<vector<int>> dp(n+1, vector<int>(totalSum/2+1, -1));
        return helper(n-1,totalSum/2, dp, nums );
    }
};