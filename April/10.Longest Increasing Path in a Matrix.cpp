class Solution {
public:
    int dp[201][201];
    int dfs(int i, int j, vector<vector<int>>& mat, int n, int m)
    {
        if(dp[i][j])return dp[i][j];
        
        int a1 = i+1<n && mat[i+1][j] < mat[i][j] ? dfs(i+1,j,mat,n,m) : 0;
        int a2 = i-1 >=0 && mat[i-1][j] < mat[i][j] ? dfs(i-1,j,mat,n,m) : 0;
        int a3 = j+1<m && mat[i][j+1] < mat[i][j] ? dfs(i,j+1,mat,n,m) : 0;
        int a4 = j-1 >=0 && mat[i][j-1] < mat[i][j] ? dfs(i,j-1,mat,n,m) : 0;
        dp[i][j] = 1 + max(max(a1,a2),max(a3, a4));
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& mat) {
        
        int n =mat.size(), m = mat[0].size();
        
        int ans =0;
        
        queue<pair<pair<int, int>, int>>q;
        int vis[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans = max(ans,dfs(i,j,mat,n,m));
            }
        }
       
        return ans;
    }
};