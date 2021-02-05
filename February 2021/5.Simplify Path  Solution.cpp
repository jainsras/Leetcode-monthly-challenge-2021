class Solution {
public:
    string simplifyPath(string path) {
        
        int n= path.size();
        string s="";
        for(int i=0; i<n; i++)
        {
            if(path[i]=='/')
            {
                if( i+1<n && path[i+1]=='/')
                    continue;
                else s.push_back('/');
            }
            else 
            {
                string w="";
                while(i<n && path[i]!='/')
                    w+=path[i++];
                if(w == "..")
                {
                    s.pop_back();
                    while(!s.empty() && s.back()!='/')
                        s.pop_back();
                    if(!s.empty())
                        s.pop_back();
                }
                else if(w==".")s.pop_back();
                else
                {
                    s+=w;
                    
                }
                i--;
                cout<<s<<" ";
            }
                
        }
        if(s.empty() || s == "/")return "/";
        if(s.back()=='/')s.pop_back();
        
        return s;
    }
};