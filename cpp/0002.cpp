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
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* n = new ListNode(l1->val + l2->val, addTwoNumbers(l1->next, l2->next));
        if(n->val >= 10)
        {
            n->val -= 10;
            ListNode* one = new ListNode(1, nullptr);

            auto nxt = addTwoNumbers(one, n->next);
            n->next = nxt;
        }
        return n;
    }
};