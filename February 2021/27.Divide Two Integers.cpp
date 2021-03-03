class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==0)return  0;
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        if((dividend == INT_MIN && divisor==1) )
            return INT_MIN;
        int ans=0;
        long a = abs(dividend), b= abs(divisor);
        while(a - b >= 0){
            
            int x = 0;
            while( a - (b << 1 << x) >= 0){
                x++;
            }
            ans += 1 << x;
            a -= (b << x);
            //cout<<a<<" "<<(b<<x)<<endl;
        }
        
        if((dividend>0 && divisor>0) ||(dividend<0 && divisor<0))
        return ans;
        return ans*=-1;
    }
};
