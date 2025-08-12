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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode* a = new ListNode(-1);
        a->next = head;
        ListNode* p = a;
        ListNode* t = head;
        while(t && t->next)
        {
            if(t->val==t->next->val)
            {
                while(t->next&&t->val==t->next->val)
                {
                    t = t->next;
                }
                p->next=t->next;
            }
            else
            p=p->next;
            t=t->next;
        }
        return a->next;
    }
};