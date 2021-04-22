class Solution {
public:
    int minOperations(int n) {
        
        int ans;
        if(n%2)
        {
            int t = (n-1)/2;
            ans = t*(t+1);
        }
        else
        {
            int t = n/2;
            ans= t*t;
        }
        return ans;
    }
};