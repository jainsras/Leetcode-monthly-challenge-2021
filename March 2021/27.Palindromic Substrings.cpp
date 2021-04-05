class Solution {
public:
    int countSubstrings(string s) {
     
        
         int l= s.length(),c;
        int ans=l;
        for(int i=0; i<l; i++)
        {
             c=1;
            for(int j=i-1,k=i+1;j>=0&&k<l;j--,k++)
            {
                if(s[j]!=s[k])
                break;
                c+=2;
                
            }
            
            ans+=c/2;
            c=0;
            for(int j=i,k=i+1;j>=0&&k<l;j--,k++)
            {
                if(s[j]!=s[k])
                break;
                c+=2;
               
            }
           ans+=c/2;
            
        }
       return ans;
    }
};