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
    int dfs(TreeNode* r,int c)
    {
        if(!r) return 0;
        c = c*2 + r->val;
        if(!r->left && !r->right)
            return c;
        return dfs(r->left,c) + dfs(r->right,c);
    }
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
    
};