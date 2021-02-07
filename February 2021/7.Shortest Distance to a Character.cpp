class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int>v(s.size(),0);
        int st=-1, e;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                if(st==-1)st=i;
                e=i;
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            v[i]= abs(i-st);
            if(s[i]==c)
            {
                v[i]=0;
                st=i;
            }
        }
        for(int i=s.size()-1; i>=0; i--)
        {
            v[i]= min(v[i],abs(i-e));
            if(s[i]==c)
            {
                v[i]=0;
                e=i;
            }
        }
        return v;
    }
};