class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n= nums.size();
        int ans=0, mx = -1, mn = INT_MAX;
        for(int i=1; i<n; i++)
        {
            if(nums[i-1]>nums[i])
            {
                int lb = upper_bound(nums.begin(),nums.begin()+i, nums[i]) -nums.begin();
             //   cout<<lb<<" ";
                mn = min(mn, lb);
                mx= i;
            //  cout<<mn<<" "<<mx<<endl;
                swap(nums[i], nums[i-1]);
            }
        }
        if(mx!=-1)
        ans = mx-mn+1;
        return ans;
    }
};
