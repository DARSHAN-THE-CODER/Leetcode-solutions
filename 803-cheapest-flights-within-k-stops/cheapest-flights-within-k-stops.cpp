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
        // {stops,{node, weight}}
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {src, 0}});

        while(!q.empty()){
            auto temp = q.front();

            q.pop();

            int stops = temp.first;
            int node = temp.second.first;
            int weight = temp.second.second;
            // ans[node] = weight;

            if(stops > k) continue;

            for(auto it: adj[node]){
                int adjNode = it.first;
                int edgeW = it.second;
                if(weight + edgeW < ans[adjNode] && stops<=k){
                    ans[adjNode] = weight + edgeW ;
                    q.push({stops+1, {adjNode, weight+edgeW}});
                }
            }
        }
        if(ans[dst] == 1e9) return -1;

        return ans[dst];
    }
};