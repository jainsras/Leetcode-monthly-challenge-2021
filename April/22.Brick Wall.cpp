class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        
        int n = wall.size();
        unordered_map<int, int>map;
        for(int i=0; i<n; i++)
        {
            if(wall[i].size()>1)
            map[wall[i][0]]++;
            for(int j=1; j<wall[i].size()-1; j++)
            {
                wall[i][j]+=wall[i][j-1];
                map[wall[i][j]]++;
            }
        }
        int mx=0;
        for(auto it=map.begin(); it!=map.end(); it++)
        {
            mx = max(mx, it->second);
        }
        return n-mx;
        
    }
};
