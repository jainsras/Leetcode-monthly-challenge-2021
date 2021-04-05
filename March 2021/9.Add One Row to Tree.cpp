/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int v, int d, int l)
    {
        if(!root)return;
        if(l==d-1)
        {
            TreeNode*n = new TreeNode(v);
            TreeNode*m = new TreeNode(v);
            TreeNode*x = root->left;
            root->left = n;
            n->left = x;
            TreeNode*y = root->right;
            root->right = m;
            m->right = y;
            return;
            
        }
        solve(root->left, v, d, l+1);
        solve(root->right, v, d, l+1);
        
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        
        if(d==1)
        {
            TreeNode*n = new TreeNode(v);
            n->left = root;
            return n;
        }
        int l = 1;
        solve(root, v, d, l);
        return root;
    }
};