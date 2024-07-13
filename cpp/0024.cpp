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
    ListNode* swapPairs(ListNode* head) {
        ListNode root = {0, head};
        ListNode *cur = &root;
        while (cur)
        {
            head = cur->next;
            if(!head) break;
            ListNode* nxt = head->next;
            if(!nxt) break;
            ListNode *nnxt = nxt->next;
            // cur -> head -> nxt -> nnxt
            cur->next = nxt;
            nxt->next = head;
            head->next = nnxt;
            cur = head;
        }
        return root.next;
    }
};