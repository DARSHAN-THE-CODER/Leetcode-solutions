class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> ans(n+1, 1e9);

        vector<pair<int, int>> adj[n+1];
        for(auto it: times){
            adj[it[0]].push_back({it[1], it[2]});
        }

        // {dist, node}
        priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

        pq.push({0,k});
        ans[k] = 0;
        int maxi = -1;
        while(!pq.empty()){
            auto x = pq.top();
            int node = x.second;
            int time = x.first;

            pq.pop();
            for(auto it: adj[node]){
                int adjNode = it.first;
                int edgWt = it.second;
                if(time+edgWt < ans[adjNode]){
                    ans[adjNode] = time+edgWt;
                    pq.push({ans[adjNode], adjNode});
                }
            }
        }
        for(int i=1;i<ans.size();i++){
            maxi = max(ans[i], maxi);
        }
        return maxi == 1e9 ? -1 : maxi;
    }
};