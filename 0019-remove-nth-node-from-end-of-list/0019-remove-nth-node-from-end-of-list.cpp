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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        ListNode* t = head;
        while(t)
        {
            l++;
            t=t->next;
        }
        int p=l-n;
        if(p==0)
        {
            ListNode* b = head->next;
            delete head;
            return b;
        }
        t=head;
        for(int i=1;i<p;i++)
            t=t->next;
        ListNode* a = t->next;
        t->next=a->next;
        delete a;
        return head;
    }
};