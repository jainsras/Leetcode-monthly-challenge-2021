class Solution {
public:
   
     double r, x, y;
public:
    Solution(double radius, double x_center, double y_center) {
        
        r = radius;
        x = x_center;
        y = y_center;
        srand(time(0));
    }
    double random(){
        return (double)rand()/RAND_MAX; 
    }
    vector<double> randPoint() {
        
        vector<double> v(2);
        double n = sqrt(random())*r;
        double deg = 2 * 3.14152 * random();
        v[0] = x + n * cos(deg);
        v[1] = y + n * sin(deg);
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */