class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> res;
        int n = difficulty.size();
        for(int i=0;i<n;i++){
            res.push_back({difficulty[i], profit[i]});
        }
        sort(res.begin(), res.end());
        vector<int> dp(n+1);
        dp[0] = res[0].second;
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1], res[i].second);
        }
        sort(difficulty.begin(), difficulty.end());
        int ans = 0;
        for(int i=0;i<worker.size();i++){
            int l = upper_bound(difficulty.begin(), difficulty.end(), worker[i]) - difficulty.begin();
            if(l!=0){
                l--;
                ans=ans+dp[l];
            }
        }
        return ans;
    }
};