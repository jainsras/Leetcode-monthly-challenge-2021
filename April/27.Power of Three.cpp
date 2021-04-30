class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return 0;
        double x=log10(n)/(double)log10(3);
        cout<<x;
        int y= floor(x);
        if(x-y==0)return 1;
        return 0;
    }
};
