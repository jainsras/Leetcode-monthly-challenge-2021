class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        
    if(digits.size()==0) return vector<string>();
    vector<string> str{ "", "", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> res;
    res.push_back("");
    for(int i=0;i<digits.size();i++)
    {
        int n=digits[i]-'0';
        if(n<=1 || n>9) break;
        vector<string> temp;
        for(int j=0;j<str[n].size();j++)
        {
            for(int k=0;k<res.size();k++)
            {
                temp.push_back(res[k]+ str[n][j]);
                // cout<<temp.back()<<" ";   
            }
        }
        res=temp;
    }
    return res;
    }
};