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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> z;
        if(root==nullptr) return z;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            vector<int>v;
            for(int i=0;i<s;i++)
            {
            TreeNode* a = q.front();
            q.pop();
            if(a->left) q.push(a->left);
            if(a->right) q.push(a->right);
            v.push_back(a->val); 
            }
            z.push_back(v);
        }
        return z;
    }
};