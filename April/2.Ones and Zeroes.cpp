
bool comp(pair<int,int>a, pair<int,int>b)
{
    if(a.first == b.first)return a.second < b.second;
    return a.first < b.first;
}
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        
    vector<vector<int> > dp(m + 1, vector<int>(n + 1));
	for(auto& str : strs) 
    {
		 int zeros=0, ones =0;
        for(int j =0; j<str.size(); j++)
        {
            if(str[j]=='0')zeros++;
            else ones++;
        }
        for(int i = m; i >= zeros; i--)
			for(int j = n; j >= ones; j--)                    
				dp[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1); 
	}
	return dp[m][n];
    }
};