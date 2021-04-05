class Solution {
public:
    int maxProfit(vector<int>& p, int fee) {
     
       
        
        int n= p.size(), ans=0;
        // if(n<=1 || k==0)return 0;
        // if(k>=n/2)
        // {
        //     for(int i=1; i<n; i++)
        //     {
        //         if(p[i]>p[i-1])
        //             ans+= p[i]-p[i-1];
        //     }
        //     return ans;
        // }
       
        int buy=-p[0];
        int sell = 0;
        for(int i=1; i<n; i++)
        {
           
                buy= max(buy, sell-p[i]);
                sell= max(sell, buy+p[i]-fee);
            
        }
           
        
        
        return sell;
    }
};