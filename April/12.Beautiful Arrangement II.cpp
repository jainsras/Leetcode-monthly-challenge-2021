class Solution {
public:
    vector<int> constructArray(int n, int k) {
        
        vector<int>v;
        v.push_back(1);
        int i=1, x=2+k;
        while(k!=0)
        {
            if(i%2)
            v.push_back(v.back()+k);
            else
                v.push_back(v.back()-k);
            i++;
            // cout<<k<<" "<<v.back()<<endl;
            k--;
        }
        while(x<=n)
        {
            v.push_back(x);
                x++;
        }
        return v;
    }
};