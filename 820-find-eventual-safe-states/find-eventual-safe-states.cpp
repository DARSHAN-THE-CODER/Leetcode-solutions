class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);
        vector<int> dist(n, 0);
        vector<int> adj[n];

        for(int i=0;i<n;i++){
            for(auto it: graph[i]){
                adj[it].push_back(i);
                dist[i]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(dist[i] == 0){
                q.push(i);
            }
        }

        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it: adj[node]){
                dist[it]--;
                if(dist[it] == 0){
                    q.push(it);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};