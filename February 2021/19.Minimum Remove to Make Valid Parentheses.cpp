class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        
        int n = s.size();
        
        stack<int>st;
        int k=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            st.push(i);
            else if(s[i]==')')
            {
                if(st.empty()) {s[i]='-';}
                else
                {
                    st.pop();
                }
               
            }
        }
       // cout<<s;
        while(!st.empty()){
            int in= st.top();
            st.pop();
            s[in]='-';
        }
       // cout<<s;
        string ans="";
         for(int i=0;i<s.length();i++)
         {
             if(s[i]!='-')
                 ans.push_back(s[i]);
         }
        return ans;
        
    }
};
