class Solution {
public:

    unordered_map<string, string> enc, dec;
    string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode() {
        string code = "";
        for (int i = 0; i < 6; i++) 
            code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }
    
    string encode(string longUrl) {
        if (dec.find(longUrl) != dec.end()) 
            return dec[longUrl];
        string code = getCode();
        while (enc.find(code) != enc.end()) 
            code = getCode();
        enc[code] = longUrl;
        dec[longUrl] = code;
        return code;
    }

    string decode(string shortUrl) {
        return enc[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));