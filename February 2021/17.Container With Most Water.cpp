class Solution {
public:
    int maxArea(vector<int>& h) {
     
        
        int l=0, r=h.size()-1;
        int mx=0;
        while(l<r)
        {
            mx=max(mx, (r-l)*min(h[l],h[r]));
            if(h[l]<h[r])
                l++;
            else r--;
        }
        return mx;
    }
};
