class FreqStack {
public:
    unordered_map<int, int> mp;
    unordered_map<int, stack<int>> m;
    int mx;
    FreqStack() {
        mx=0;
    }
    
    void push(int x) {
        
        mp[x]++;
        mx=max(mx,mp[x]);
        m[mp[x]].push(x);
    }
    
    int pop() {
        
        if(mx<=0)return -1;
        
        int ans=m[mx].top();
        m[mx].pop();
        mp[ans]--;
        if(m[mx].size()==0) {
            m.erase(mx);
            mx--;
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
