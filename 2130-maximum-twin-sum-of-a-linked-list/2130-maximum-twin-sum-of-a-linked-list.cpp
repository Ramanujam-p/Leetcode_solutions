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
    ListNode* middle(ListNode* head)
    {
        ListNode* s=head,*f=head;
        while(f->next && f->next->next)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    ListNode* rev(ListNode* a)
    {
        ListNode* c=a,*p=nullptr;
        while(c)
        {
            ListNode* n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    int pairSum(ListNode* head) {
        ListNode* s=middle(head);
        ListNode* secondHalf=rev(s->next);
        int m=0;
        ListNode* t=head;
        while(secondHalf)
        {
            int c=t->val+secondHalf->val;
            m=max(c,m);
            t=t->next;
            secondHalf=secondHalf->next;
        }
        return m;
    }
};