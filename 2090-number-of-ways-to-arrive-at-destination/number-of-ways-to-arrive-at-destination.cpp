class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

        vector<pair<int,int>> adj[n];
        for(auto it: roads){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        vector<int> ways(n, 0);
        vector<long long> dist(n, 1e15);

        // {dist, node}
        pq.push({0,0});
        ways[0] = 1;
        dist[0] = 0;

        int mod = (int)(1e9+7);

        while(!pq.empty()){
            long long dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]){
                int adjNode = it.first;
                long long edgW = it.second;
                if(edgW+dis < dist[adjNode]){
                    dist[adjNode] = edgW+dis;
                    ways[adjNode] = ways[node];
                    pq.push({edgW+dis, adjNode});
                } else if(edgW+dis == dist[adjNode]){
                    ways[adjNode] = (ways[adjNode] + ways[node]) % ((int)1e9+7);
                }
            }
        }
        return ways[n-1] % ((int)1e9+7);
    }
};