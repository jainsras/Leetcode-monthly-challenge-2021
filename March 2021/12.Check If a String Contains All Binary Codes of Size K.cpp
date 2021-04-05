class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        set<string>set;
        int n =s.size();
        for(int i=0; i<=n-k; i++)
        {
            string t = s.substr(i,k);
            set.insert(t);
           // cout<<t<<" ";
            
        }
        if(set.size()== pow(2,k))
            return 1;
        return 0;
    }
};