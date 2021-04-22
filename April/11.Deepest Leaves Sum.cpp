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
    int ans = 0;
    int maxDepth(TreeNode* root) {
        if(!root)return 0;
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);
        
    }
    void solve(TreeNode* root, int k, int depth)
    {
        if(!root)return;
        if(k == depth)
        {
            ans+=root->val;
            return;
        }
        solve(root->left, k+1, depth);
        solve(root->right, k+1, depth);
        
        
    }
    int deepestLeavesSum(TreeNode* root) {
        
        int depth = maxDepth(root);
        solve(root, 1, depth);
        return ans;
        
    }
};