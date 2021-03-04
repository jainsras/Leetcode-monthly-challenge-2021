class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        set<int>s;
        for(int i=0 ;i<candyType.size(); i++)
        {
            s.insert(candyType[i]);
        }
        int x = s.size(), y = candyType.size();
        if(x <= y/2)return x;
        return y/2;
    }
};
