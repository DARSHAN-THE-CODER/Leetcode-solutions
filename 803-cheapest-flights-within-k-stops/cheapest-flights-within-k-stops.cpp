class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int, int>> adj[n];

         for(auto it: flights){
            // auto it = flights[i];
            adj[it[0]].push_back({it[1], it[2]});
        }
        vector<int> ans(n+1, 1e9);

        ans[src] = 0;
        // {stops, {node, cost}}
        queue<pair<int, pair<int, int>>> q;
        q.push({0,{src, 0}});

        while(!q.empty()){
            int node = q.front().second.first;
            int stops = q.front().first; 
            int cost = q.front().second.second; 

            q.pop();
             if(stops > k) continue;
            for(auto it: adj[node]){
                int adjNode = it.first;
                int adjWeight = it.second;
                if(cost+adjWeight < ans[adjNode] && stops<=k){
                    ans[adjNode] = cost+adjWeight;
                    q.push({stops+1,{adjNode, ans[adjNode]}});
                }
            }
        }
        if(ans[dst] == 1e9) return -1;
        return ans[dst];
    }
};