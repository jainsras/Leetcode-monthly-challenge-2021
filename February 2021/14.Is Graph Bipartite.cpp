class Solution {
public:
    bool check(vector<vector<int>>& graph , int i , vector<int>&par)
    {
        queue<int> q;
        q.push(i);
        par[i] = 1;
 
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
 
            for(auto u:graph[curr])
            {
                if(par[u]==-1)
                {
                    par[u] = par[curr]==1?0:1;
                    q.push(u);
                }
                else if(par[u]==par[curr])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
 
    bool isBipartite(vector<vector<int>>& graph)
    {
        int n = graph.size();
    vector<int> par(n,-1);
 
        for(int i=0;i<n;i++)
        {
            if(par[i]==-1)
            {
                if(!check(graph,i,par))
                    return 0;
            }
        }
 
        return 1;
    }
};
