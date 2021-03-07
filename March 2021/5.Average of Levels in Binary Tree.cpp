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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            double c = 0, sum =0;
            while(size--)
            {
                TreeNode*top = q.front();
                q.pop();
                double x = top->val;
                sum+=x;
                c++;
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
                
            }
            double ans = (double)sum/c;
            v.push_back(ans);
        }
        return v;
    }
};
