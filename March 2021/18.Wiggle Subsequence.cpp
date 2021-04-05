class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int n = nums.size();
        int c=1, i=0;
        if(n<=2)return 1;
        while(i<n-1 && nums[i]==nums[i+1])i++;
        while(i<n-1)
        {
            if(i<n-1 && nums[i]<=nums[i+1])
            {
                
                while(i<n-1 && nums[i]<=nums[i+1])
                {
                    i++;
                }
                c++;
            }
            
            if(i<n-1 && nums[i]>=nums[i+1]){
            while(i<n-1 && nums[i]>=nums[i+1])
            {
                i++;
            }
                c++;
            }
            
        }
        return c;
    }
};