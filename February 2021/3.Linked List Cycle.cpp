class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow = head, *fast = head;
        if(!head || !head->next)return false;
        while(fast && fast->next )
        {
            
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast)return 1;
        }
      
        if(slow==fast )return 1;
        return 0;
    
    }
};