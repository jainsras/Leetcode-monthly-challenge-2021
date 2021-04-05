/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* reverse(ListNode*h)
    {
        if(!h || !h->next)return h;
        ListNode*temp=reverse(h->next);
        h->next->next=h;
        h->next=NULL;
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        if(!head)return 1;
        ListNode*t=head,*s=head,*f=head;
       while(f->next && f->next->next)
       {
           s=s->next; f=f->next->next;
       }
        t=s->next;
        t=reverse(t);
        while(t)
        {
            if(t->val!=head->val)return 0;
            t=t->next;
            head=head->next;
        }
        return 1;
    }
};