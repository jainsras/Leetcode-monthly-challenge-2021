class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        vector<int>res = {-1,-1};
        if(nums.size()==0) return res;
        int i=0, j= nums.size()-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[mid] < target)
                i=mid+1;
            else 
                j = mid;
        }
        if(nums[j] == target) 
            res[0] =j;    
        else 
            return res;               
        
        j=nums.size()-1;               
        while(i<j)
        {
            int mid = (i+j)/2;    
            if(nums[mid]<=target)      
                i = mid+1;
            else 
                j = mid-1;
        }
        if(nums[i]==target)
            res[1]=i;
        else
        res[1] =i-1;
        return res;
    }
};
