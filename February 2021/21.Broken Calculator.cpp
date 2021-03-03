class Solution {
public:
    int brokenCalc(int x, int y) {
     
      int ans = 0;
      while (y > x) 
      {
        ans += 1 + y % 2; 
        y += y % 2; 
        y /= 2;
      }
      return ans + (x - y);
    }
};
