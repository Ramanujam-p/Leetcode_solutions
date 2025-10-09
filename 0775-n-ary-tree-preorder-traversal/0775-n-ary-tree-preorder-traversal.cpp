/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preorder(Node* root,vector<int>& r)
    {
        if(!root) return;
        r.push_back(root->val);
        for(Node* c:root->children)
            preorder(c,r);
    }
    vector<int> preorder(Node* root) {
        vector<int> r;
         preorder(root,r);
         return r;
    }
};