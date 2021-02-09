class PeekingIterator : public Iterator {
public:
    int value;
    
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
         value = Iterator::hasNext() ? Iterator::next() : INT_MAX;
	    
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return value;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int oldval = value;
        value = Iterator::hasNext() ? Iterator::next() : INT_MAX;
        return oldval; 
	}
	
	bool hasNext() const {
	    return (value != INT_MAX);
	}
};