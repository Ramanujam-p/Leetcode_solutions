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
        ListNode* s=head;
        ListNode* f=head;
        while(f->next && f->next->next)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    ListNode* rev(ListNode* a)
    {
        ListNode* c = a;
        ListNode* p = nullptr;
        while(c)
        {
            ListNode* n = c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* a = middle(head);
       ListNode* secondHalf = rev(a->next);
       ListNode* firstHalf = head;
       while(secondHalf)
       {
        if(firstHalf->val!=secondHalf->val)
            return false;
            firstHalf=firstHalf->next;
            secondHalf=secondHalf->next;
       }
       return true;
    }
};