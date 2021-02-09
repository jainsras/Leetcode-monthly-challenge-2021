class Solution {
public:
   
    int solve(TreeNode*root, int &sum)
    {
        if(!root)return 0;
        root->val+=solve(root->right, sum)+sum;
        sum=root->val;
        return solve(root->left,sum);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        solve(root,sum);
        return root;
    }
};
