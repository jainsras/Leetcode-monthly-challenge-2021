class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& M, int target) {
     
        int n = M.size(),m= M[0].size(), ans = 0;
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < m; j++)
                M[i][j] += M[i][j-1];
        }
        
        for(int j = 0; j < m; j++)
        {
            for(int k = j; k < m; k++) 
            {
                map.clear();
                map[0] = 1;
                int sum = 0;
                for (int i = 0; i < n; i++) 
                {
                    sum += M[i][k] - (j ? M[i][j-1] : 0);
                    if(map.find(sum - target) != map.end())
                    ans += map[sum - target];
                    else ans+=0;
                    map[sum]++;
                }
            }
        }
        return ans;
    }
};