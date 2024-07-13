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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int ln = -n;
        auto cur = head;
        while (cur)
            cur = cur->next, ++ln;
        cur = head;
        if (ln == 0)
            return head->next;
        for (int i = 0; i < ln - 1; i++)
            cur = cur->next;
        cur->next = cur->next->next;
        return head;
    }
};