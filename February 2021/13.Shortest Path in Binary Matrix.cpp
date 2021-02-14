class Solution {
    bool isValid(int i, int j, int n, int m)
    {
        return ((i>=0 && i<n) && (j>=0 && j<m));
    }
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(grid[0][0]==1)
            return -1;
        
        vector<vector<bool>> vis(n, vector<bool>(m,false));
        queue<pair<pair<int,int>, int>> q;
        
        q.push({{0,0},1});
        vis[0][0] = 1;
        
        int row[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int col[8] = {0, -1, -1, -1, 0, 1, 1, 1};
        
        while(!q.empty())
        {
            pair<pair<int,int>, int> p=q.front();
            int dist = p.second;
            
            if(p.first.first == n-1 && p.first.second == m-1)
                return dist;
            
            q.pop();
            
            int r = p.first.first;
            int c = p.first.second;
            for(int i=0;i<8;i++)
            {
                if(isValid(r+row[i], c+col[i], m, n) && vis[r+row[i]][c+col[i]]==0 && grid[r+row[i]][c+col[i]]==0)
                {
                    pair<int, int> t = {r+row[i],c+col[i]};
                    q.push({t, dist+1});
                    vis[r+row[i]][c+col[i]] = 1;
                }
            }
        }
        return -1;
        
    }
};
