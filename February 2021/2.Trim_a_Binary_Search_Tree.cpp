class Solution {
public:
    void solve(TreeNode* root, int low, int high)
    {
        if(!root)return ;
        // cout<<root->val<<" ";
           
        if(root->left && root->left->val<low)
        {
            root->left= root->left->right;
            solve(root, low, high);
        }
        if(root->right && root->right->val>high)
        {
            root->right= root->right->left;
            solve(root, low, high);
        }
       else{
            solve(root->left, low, high);
            solve(root->right, low, high);
       }
         
    }
    TreeNode*check(TreeNode* root, int low, int high)
    {
            if(root->val>=low && root->val<=high)
                return root;
        
        if(root->val<low)
            return check(root->right, low, high);
        else
            return check(root->left,low,high);
        
            
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root)return NULL;
        solve(root, low, high);
        //return root;
        return check(root,low,high);
            
    }
};