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
    ListNode* insertionSortList(ListNode* head) {
      vector<int> a;
      ListNode* b = head;
      while(b)
      {
        a.push_back(b->val);
        b = b->next;
      }
      sort(a.begin(),a.end());
      b = head;
      int i=0;
      while(b)
      {
        b->val = a[i++];
        b = b->next;
      }
      return head;
    }
};