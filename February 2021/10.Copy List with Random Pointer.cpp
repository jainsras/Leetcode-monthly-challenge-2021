class Solution {
public:
     Node* maps(Node*h,unordered_map<Node*,Node*>&m)
   {
       if(!h)
       return NULL;
       Node*root= new Node(h->val);
       m[h]=root;
       root->next=maps(h->next,m);
       return root;
   }
   void solve(Node*h,unordered_map<Node*,Node*>&m,Node*root)
   {
       if(!h)
       return;
       root->random=m[h->random];
       solve(h->next,m,root->next);

   }
    Node* copyRandomList(Node* h) {
       if(!h) return NULL;
       unordered_map<Node*,Node*>m;
       Node*root=maps(h,m);
       solve(h,m,root);
       return root;
    }
};
