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
    int maxLevelSum(TreeNode* root) {
        int l=1,al=1,ms=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            int ls=0;
            for(int i=0;i<s;i++)
            {
                TreeNode* a = q.front();
                q.pop();
                ls+=a->val;
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            if(ls>ms)
            {
                ms = ls;
                al = l;
            }
            l++;
        }
        return al;
    }
};