/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
    vector<int>v;
    int in=0;
public:
    
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList);
        
    }
    void flatten(vector<NestedInteger> &nestedList)
    {
        for(int i=0; i<nestedList.size(); i++)
        {
            if(nestedList[i].isInteger())
            {
                v.push_back(nestedList[i].getInteger());
                // cout<<v.back()<<" ";
            }
            else 
                flatten(nestedList[i].getList());
        }
    }
    int next() {
        
        return v[in++];
    

    }
    
    bool hasNext() {
        if(in>=v.size())return 0;
        return 1;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */