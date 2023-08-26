class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<int> vis(n+1, 0);
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            vis[node] = 1;
            q.pop();
            for(int i=0;i<rooms[node].size();i++){
                if(!vis[rooms[node][i]]){
                    q.push(rooms[node][i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i] == 0) return false;
        }
        return true;
    }
};