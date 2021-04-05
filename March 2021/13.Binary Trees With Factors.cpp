class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
     
             sort(arr.begin(), arr.end());
        int n = arr.size();
        long ans = 0;
        unordered_map<int, long> m;
        for (int num : arr) 
        {
            long x = 1;
            int j=0;
            for (int k = arr[j]; k <= sqrt(num); k = arr[++j]) 
            {
                if (num % k != 0) continue;
                int y = num / k;
                if (m.find(y) != m.end())
                    x += m[k] * m[y] * (k == y ? 1 : 2);
                // j++;
            }
            m[num] = x;
            ans = (ans + x) % 1000000007;
        }
        return (int)ans;
    }
};