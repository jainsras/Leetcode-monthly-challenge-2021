class Solution {
public:
    string originalDigits(string s) {
        
       vector<string> words = {"zero", "two", "four", "six", "eight", "one", "three", "five", "seven", "nine"};
        vector<int> nums = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};
        vector<int> uniq = {'z', 'w', 'u', 'x', 'g', 'o', 'h', 'f', 's', 'i'};
        unordered_map<char,int>m;
        string res="";
        for(char ch : s)
        { m[ch]++;}
        for(int i = 0; i < 10; i++)
        {
            int count = m[uniq[i]];
            for(char c: words[i])
                m[c] -= count;
            while(count--)
                res += to_string(nums[i]);
        }
        sort(res.begin(), res.end());
        return res;
        
    }
};