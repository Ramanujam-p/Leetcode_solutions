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
    vector<int> postorderTraversal(TreeNode* root) {
        h(root);
        return r;
    }
    void h(TreeNode* root)
    {
        if(!root) return;
        h(root->left);
        h(root->right);
        r.push_back(root->val);
    }
};