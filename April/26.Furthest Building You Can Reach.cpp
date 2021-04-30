class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
         priority_queue<int, vector<int> ,greater<int> > pq;
        
        
        int i, n=heights.size();
        for ( i = 1; i < n && ladders; ++i) 
        {
            int diff = heights[i] - heights[i - 1];
            if (diff > 0) 
            {
                pq.push(diff);
                ladders--;
            }
        }
        // cout<<pq.top();
        while(i<n)
        {
             int diff = heights[i] - heights[i - 1];
            if (diff > 0) 
            {
                if(!pq.empty() && diff>pq.top())
                {
                    bricks-=pq.top();
                    pq.pop();
                    pq.push(diff);
                }
                else
                {
                    bricks-=diff;
                }
            }
            if(bricks<0)return i-1;
            i++;
        }
       
        return n - 1;
    }
};
