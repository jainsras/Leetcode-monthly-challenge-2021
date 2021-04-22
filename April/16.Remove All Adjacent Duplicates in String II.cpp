class Solution {
public:
    string removeDuplicates(string s, int k) {
     
        if(k==1)return s;
        stack<pair<char,int>>st;
        st.push({s[0],1});
        for(int i=1; i<s.size(); i++)
        {
            if(st.empty())
            {
                st.push({s[i], 1});
                continue;
            }
            pair<char,int> x = st.top();
            if(x.first == s[i])
            {
                st.push({s[i], x.second+1});
            
            }
            else 
            {
                st.push({s[i], 1});
            
            }
            if( !st.empty() && st.top().second == k && x.first == s[i])
            {
                while(!st.empty() && st.top().first == x.first)
                    st.pop();
                
            }
            
        }
        string ans="";
        while(!st.empty())
        {
            ans= st.top().first + ans;
            st.pop();
        }
        return ans;
    }
};