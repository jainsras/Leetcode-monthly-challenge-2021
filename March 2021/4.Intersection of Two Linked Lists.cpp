/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
         unordered_map<ListNode*,int>f;
    while(head1!=NULL)
    {
        f[head1]++;
        head1=head1->next;
    }
    while(head2!=NULL)
    {
        f[head2]++;
        if(f[head2]>1)
       {   return head2;
       }
           
        head2=head2->next;
    }
    
      
    return NULL;
    }
};
