
bool comp(vector<int>a, vector<int>b)
{
    if(a[0]==b[0])return a[1]>b[1];
    return a[0]<b[0];
}
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& env) {
        
        int n = env.size();
        sort(env.begin(), env.end(), comp);
        
        
        int dp[n];
        for(int i=0; i<n; i++)
        dp[i]=1;
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(env[j][1]>env[i][1])
                dp[j] = max(dp[j],dp[i]+1);
            }
        }
        int ans = *max_element(dp,dp+n);
        return ans;
        
    }
};