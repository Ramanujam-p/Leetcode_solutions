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
     TreeNode* bst(vector<int> nums,int l,int h)
    {
        if(l>h) return nullptr;
        int m = l+(h-l)/2;
        TreeNode* a = new TreeNode(nums[m]);
        a->left = bst(nums,l,m-1);
        a->right = bst(nums,m+1,h);
        return a;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return nullptr;
        return bst(nums,0,nums.size()-1);
    }
};