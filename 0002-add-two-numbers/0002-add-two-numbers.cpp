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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode d(0),*t=&d;
        int c=0;
        while(l1 || l2 ||c)
        {
            int s=c;
            if(l1)
            {
                s+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                s+=l2->val;
                l2=l2->next;
            }
            c=s/10;
            ListNode* a = new ListNode(s%10);
            t->next=a;
            t=t->next;
        }
            return d.next;
    }
};