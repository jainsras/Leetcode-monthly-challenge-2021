class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        int vis[n];
        memset(vis, 0, sizeof(vis));
        
        queue<int>q;
        q.push(0);
        
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            vis[p]=1;
            for(int i =0; i<rooms[p].size(); i++)
            {
                if(!vis[rooms[p][i]])
                    q.push(rooms[p][i]);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i]==0)return 0;
        }
        return 1;
    }
};