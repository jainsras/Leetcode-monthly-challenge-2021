

 bool comp(pair<int, int>p1, pair<int, int>p2)
    {
        if(p1.first == p2.first)
            return p1.second < p2.second;
        return p1.first < p2.first;
    }
class Solution {
   
    int search(int s, int e, vector<int>& mat)
    {
        int m =(s+e)/2;
        if(s>=e)return m;
        if(mat[m]==0 && m==0)
            return m;
        if(mat[m]==0 && mat[m-1]==1)
            return m;
        
        if(mat[m]==1)
            return search(s+1, e, mat);
        else
            return search(s, e-1, mat);
    }
    
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        vector<pair<int, int>>v;
        for(int i=0; i<mat.size(); i++)
        {
            int in= search(0, mat[i].size(), mat[i]);
            // cout<<in<<" ";
            pair p = {in,i};
            v.push_back(p);
        }
        sort(v.begin(), v.end(), comp);
        vector<int>ans;
        int i=0;
        while(k--)
            ans.push_back(v[i++].second);
        return ans;
    }
};
