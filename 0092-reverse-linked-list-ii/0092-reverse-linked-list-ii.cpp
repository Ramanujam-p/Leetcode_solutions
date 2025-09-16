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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;
        ListNode* p = nullptr;
        ListNode* c = head;
        for(int i = 1; i<left; i++)
        {
            p = c;
            c = c->next;
        }
        ListNode* a = p;
        ListNode* b = c;
        ListNode* next = nullptr;
        for(int i=0;i<right - left + 1;i++)
        {
            next = c->next;
            c->next = p;
            p = c;
            c = next;
        }
        if(a!=nullptr) a->next = p;
        else head = p;
        b->next = c;
        return head;
    }
};