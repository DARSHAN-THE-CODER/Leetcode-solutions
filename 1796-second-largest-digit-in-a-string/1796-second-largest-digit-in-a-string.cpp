class Solution {
public:
    int secondHighest(string s) {
        sort(s.begin(),s.end());
        set<int> ans;
        int i=0;
        while(isdigit(s[i])){
            ans.insert(s[i]-'0');
            i++;
        }
        if(ans.size()<=1)
            return -1;
        auto it = ans.end();
        it--;
        it--;
        return *it;
    }
};