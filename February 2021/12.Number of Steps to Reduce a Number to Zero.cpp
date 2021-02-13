class Solution {
public:
    int numberOfSteps (int num) {
     
        int ans=0;
        while(num>1)
        {
            if(num%2)
                ans+=2;
            else
                ans++;
            num/=2;
        }
        if(num)ans++;
        return ans;
    }
};
