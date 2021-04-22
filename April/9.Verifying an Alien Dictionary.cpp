class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        unordered_map<char,int>m;
        int k=1;
        for(int i=0; i<order.size(); i++)
            m[order[i]]=k++;
        
        for(int i=0; i<words.size()-1; i++)
        {
            int j=0, s1=words[i].size(), s2=words[i+1].size();
            while(j<s1 && j<s2 && words[i][j]==words[i+1][j])
            {
                j++;
            }
            if(j==s2 && j<s1)return 0;
            if(j<s1 && j<s2)
            {
                if(m[words[i][j]]>m[words[i+1][j]])
                    return 0;
            }
        }
        return 1;
        
    }
};