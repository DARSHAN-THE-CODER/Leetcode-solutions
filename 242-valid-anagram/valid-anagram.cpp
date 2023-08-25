class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;
        map<char, int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        for(int j=0;j<t.length();j++){
            if(mp.find(t[j]) == mp.end() || mp[t[j]] <= 0){
                return false;
            }
            mp[t[j]]--;
        }
        return true;
    }
};