class Solution {
public:
    bool halvesAreAlike(string s) {
     
        int c1=0, c2=0;
        for(int i=0; i<s.size()/2; i++)
        {
           s[i]= tolower(s[i]);
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                c1++;
            
        }
        for(int i=s.size()/2; i<s.size(); i++)
        {
           s[i]= tolower(s[i]);
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                c2++;
        }
        
        cout<<s;
        if(c1==c2)
        return 1;
        return 0;
    }
};