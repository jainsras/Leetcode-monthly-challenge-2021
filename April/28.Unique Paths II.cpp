class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n= obstacleGrid.size();
        int m= obstacleGrid[0].size();
        int dp[n][m];
        dp[0][0]= obstacleGrid[0][0]==1?0:1;
        for(int i=1;i<n;i++)
        {
            dp[i][0] = obstacleGrid[i][0]==1?0:dp[i-1][0];
        }
        for(int j=1;j<m;j++)
        {
            dp[0][j] = obstacleGrid[0][j]==1?0:dp[0][j-1];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(obstacleGrid[i][j-1]==1)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else if(obstacleGrid[i-1][j]==1)
                {
                    dp[i][j]=dp[i][j-1];
                }
                else
                {
                    dp[i][j]=dp[i-1][j]+ dp[i][j-1];
                }
                if( obstacleGrid[i][j]==1)
                    dp[i][j]=0;
               // cout<<dp[i][j]<<" ";
            }
        }
        return dp[n-1][m-1];
        
    }
};
