class Solution {
public:
    void rotate(vector<vector<int>>& m) {
     int n=m.size();
        int l=0,h=n-1;
        while(l<h)
        {
            for(int i=l;i<h;i++)
            {
                int t= m[l][i];
                m[l][i]=m[h-i+l][l];
                m[h-i+l][l]=m[h][h-i+l];
                m[h][h-i+l]=m[i][h];
                m[i][h]=t;
            }
            l++;h--;
        }
        
    }
};
