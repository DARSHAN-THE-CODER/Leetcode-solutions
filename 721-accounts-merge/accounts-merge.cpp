class Solution {
public:
    string find(string node , unordered_map<string,string> &mp){
        if(node == mp[node]) return node;
        return find(mp[node],mp);
    }

    void Union(string a, string b, unordered_map<string, string > &mp){
        a = find(a,mp);
        b = find(b,mp);
        if(a!=b){
            mp[a] = b;
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string,string> mpp;
        unordered_map<string,string> mp;
        for(int i=0;i<accounts.size();i++){
            int n = accounts[i].size();
            for(int j=1;j<n;j++){
                mp[accounts[i][j]] = accounts[i][j];
                mpp[accounts[i][j]] = accounts[i][0];
            }
        }

        for(int i=0;i<accounts.size();i++){
            int n = accounts[i].size();
            for(int j=1;j<n-1;j++){
                Union(accounts[i][j],accounts[i][j+1],mp);
            }
        }
        
        map<string,vector<string>> m;
        for(auto it :mp){
            string node = find(it.first,mp);
            m[node].push_back(it.first);
        }
        vector<vector<string>> v;
        for(auto it :m){
            vector<string> temp;
            temp = it.second;
            sort(temp.begin(),temp.end());
            string node = find(temp[0],mp);
            temp.insert(temp.begin(),mpp[node]);
            v.push_back(temp);
        }
        
        return v;
        

    }
};