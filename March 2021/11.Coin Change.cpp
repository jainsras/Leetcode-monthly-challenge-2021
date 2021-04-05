class Solution {
public:
    int coinChange(vector<int>& c, int t) {
        
        int n = c.size();
        int dp[n+1][t+1];
        sort(c.begin(), c.end());
        for(int i =0; i<=n; i++)
        {
            dp[i][0]=0;
        }
        for(int i =1; i<=t; i++)
        {
            dp[0][i]=-1;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=t;j++)
            {
                if(c[i-1]==j)
                    dp[i][j] = 1;
                else if(c[i-1]<j)
                {
                    
                    if(dp[i][j-c[i-1]]==-1)
                        dp[i][j] = dp[i-1][j];
                    else
                        dp[i][j] = dp[i-1][j]==-1?dp[i][j-c[i-1]]+1: min(dp[i-1][j], dp[i][j-c[i-1]]+1);
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][t];
        
    }
};