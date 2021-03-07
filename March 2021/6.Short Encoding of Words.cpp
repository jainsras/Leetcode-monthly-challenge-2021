 bool comp(string s1, string s2)
    {
        return s1.size()>s2.size();
    }
class Solution {
    
   
public:
    int minimumLengthEncoding(vector<string>& words) {
        
        unordered_map<string, int>m;
        sort(words.begin(), words.end(), comp);
        string ans="";
        for(int i=0; i<words.size(); i++)
        {
            if(m[words[i]]==0)
            {
                ans+=words[i]+"#";
                int n = words[i].size();
                for(int j=0; j<n; j++)
                {
                    string s = words[i].substr(j,n-j);
                    //cout<<s<<" ";
                    m[s]++;
                }
                // cout<<ans<<" ";
            }
        }
        return ans.size();
    }
};
