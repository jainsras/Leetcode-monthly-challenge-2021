class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int sum=0,b, n=nums.size();
        unordered_map<int, int>m;
        for(int i=0; i<n; i++)
        {
            m[nums[i]]++;
            sum+=nums[i];
             if(m[nums[i]]>1)
		    {
		        b=nums[i];
		    }
		}
	  
		int x=n*(n+1)/2;
        vector<int>v;
        v.push_back(b);
        v.push_back(x-sum+b);
        return v;
    }
};
