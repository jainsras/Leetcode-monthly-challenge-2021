class Solution {
public:
    void helper(string s, int n, set<string>&v, int i)
    {
        if(i==n)
        {v.insert(s);
         return;}
        helper(s,n,v,i+1);
        if(s[i]>='a' && s[i]<='z')
        s[i]=toupper(s[i]);
        else if(s[i]>='A' && s[i]<='Z')
            s[i]= tolower(s[i]);
        helper(s,n,v,i+1);
        
        
        
    }
    vector<string> letterCasePermutation(string s) {
        
        set<string>v;
        helper(s, s.size(), v, 0);
        vector<string>ans;
        for(auto it: v)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
