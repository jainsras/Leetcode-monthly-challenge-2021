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
    int in = 0;
    vector<int> ans;
    void dfs(TreeNode* node, vector<int>& voyage) {
        
        if (!node || (!ans.empty() && ans[0]==-1) ) return;
        if (node->val != voyage[in]) 
        {
            ans = {-1};
            return;
        }
        else if (node->left && node->left->val != voyage[in+1]) {
            in++;
            ans.push_back(node->val);
            dfs(node->right, voyage);
            dfs(node->left,voyage);
        } else{
             // cout<<in<<" ";
            in++;
            dfs(node->left, voyage);
            dfs(node->right, voyage);
        }
       
    }
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        dfs(root, voyage);
        return ans;
    }
};