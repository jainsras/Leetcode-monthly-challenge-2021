class Solution {
public:
    vector<vector<int>> ans; 
    vector<vector<int>> adj;
    vector<int> vis;
    vector<int> gra; 
    vector<int> par; 
    int t=0; 
    
    void dfs(int i){
        vis[i]=gra[i]=t++; 
        for(int &u:adj[i]) 
        {
            if(!vis[u]) 
            {
                par[u]=i; 
                dfs(u); 
                gra[i]=min(gra[i],gra[u]); 
                if(vis[i]<gra[u]) 
                    ans.push_back({i,u});
            }
            else if(u!=par[i]) 
                gra[i]=min(gra[i],vis[u]); 
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        par.resize(n,-1);
        gra.resize(n,-1);
        vis.resize(n,0);
        for(int i=0;i<connections.size();i++)
        { 
            adj[connections[i][0]].push_back(connections[i][1]); 
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
                dfs(i);
        }
        return ans;
    }
};
