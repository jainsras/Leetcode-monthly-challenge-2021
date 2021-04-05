class Solution {
public:
   vector<int> count(int N){
	vector<int>v(10);
	while(N)
    {
        v[N % 10]++;
        N /= 10;
    }
	return v;
}
bool reorderedPowerOf2(int N) {
    
	vector<int>v = count(N); 
	for(int p = 1; p < pow(2,30); p<<= 1)
    {
        if(v == count(p)) return 1; 
    }
	return 0;
}
};