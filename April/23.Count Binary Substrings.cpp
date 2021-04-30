class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int n = s.size(), ans=0, c0=0, c1=0;
        for(int i=0; i<n;)
        {
            if(s[i]=='0')
            {
                c0=0;
                while(i<n &&  s[i]=='0')
                {
                    c0++;
                    i++;
                }
                ans+=min(c1, c0);
            }
            else
            {
                c1=0;
                while(i<n &&  s[i]=='1')
                {
                    c1++;
                    i++;
                }
                ans+=min(c1, c0);
            }
        }
        return ans;
    }
};
