class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i=0; i< nums.size(); i++)
            m[nums[i]]++;
        
        int ans = 0;
        for(int i=0; i< nums.size(); i++)
        {
            int x = m[nums[i]+1]>0? m[nums[i]] + m[nums[i]+1] : 0;
            ans = max(ans, x);
        }
        return ans;
    }
};