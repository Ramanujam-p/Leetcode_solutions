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
    vector<int> r;
    vector<int> preorderTraversal(TreeNode* root) {
        h(root);
        return r;
    }
    void h(TreeNode* root)
    {
        if(!root) return;
        r.push_back(root->val);
        h(root->left);
        h(root->right);
    }
};