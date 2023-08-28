class Solution {
public:
    bool helper(int index, vector<int> &piles, vector<int> &dp){
        if(index<0) return false;
        if(index == 0) return piles[index];
        if(dp[index]!= -1) return dp[index];

        int take = helper(index-1, piles, dp) + piles[index];
        int notTake = helper(index-2, piles, dp) + 0;

        return dp[index] = max(take, notTake);
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<int> dp(n+1, -1);

        return max(helper(n-1, piles, dp), helper(0, piles, dp));
    }
};