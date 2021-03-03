class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>s;
        int i=0, j=0;
        int n= pushed.size(), m =popped.size();
        while(i<n)
        {
            while(i<n && j<m && pushed[i]!=popped[j])
            {
                s.push(pushed[i++]);
            }
             s.push(pushed[i++]);
            while(j<m && !s.empty() && s.top()==popped[j])
            {
                s.pop();
                j++;
            }
        }
        if(!s.empty())return 0;
        return 1;
    }
};
