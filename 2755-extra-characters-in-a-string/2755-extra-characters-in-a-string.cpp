class Solution {
public:
    map<string,int>mp;
    int helper(int index, string s, vector<int> &dp ){
        if(index>=s.size()) return 0;
        int ans = INT_MAX;
        if(dp[index] != -1) return dp[index];
        ans = 1 + helper(index+1, s, dp);
        string k = "";
        for(int i=index;i<s.size();i++){
            k+=s[i];
            if(mp[k]){
                ans = min(ans, helper(i+1, s, dp));
            }
        }
        return dp[index] = ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        for(auto i : dictionary)mp[i]++;
        vector<int> dp(s.size(),-1);
        return helper(0, s, dp);
    }
};