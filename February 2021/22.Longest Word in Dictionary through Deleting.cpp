class Solution {
public:
     bool check(string str, string s) {
        int i = 0, j = 0;
        
        while (i < str.size() && j < s.size()) {
            
            if (str[i] == s[j])
                i++; 
            
            j++;
        }
        
        return i == str.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        
        string ans = "";
        int anslen = 0;
        for (auto str : dictionary) {
            
            if (str.length()>=anslen && check(str, s)) 
            {
                
                if (str.size() > anslen || (str.size() == anslen && str < ans))
                {ans = str; anslen= ans.size();}
            }
        }
        
        return ans;
    }
};
