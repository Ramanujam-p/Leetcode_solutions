/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        stack<ListNode*> s;
        ListNode* a = head;
        while(a)
        {
            s.push(a);
            a = a->next;
        }
        ListNode* b = s.top();
        s.pop();
        ListNode* c = b; 
        while(!s.empty())
        {
            ListNode* d = s.top();
            s.pop();
            c->next = d;
            c = d;
        }
        c->next = nullptr;
        return b;
    }
};