class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp;
        vector<vector<string>> ans;
        for(auto i: strs){
            string temp = i;
            sort(i.begin(), i.end());
            if(mp[i]){
                ans[mp[i]-1].push_back(temp);
            }else{
                ans.push_back({temp});
                mp[i] = ans.size();
            }
        }
        return ans;
    }
};