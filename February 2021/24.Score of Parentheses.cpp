class Solution {
public:
    int scoreOfParentheses(string S) {
        
        int n = S.length(), p = 0, ans = 0;
        for (int i = 1; i<n; i++)
        {
            if (S[i] == '(') p++;
            else if (S[i-1] == '(')
            {
                ans += (1 << p);
                p--;
            }
            else p--;
          //  cout<<ans<<" "<<p<<endl;
        }
        return ans;
    }
};
