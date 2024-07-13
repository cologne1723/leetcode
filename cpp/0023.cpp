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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode root = {0, nullptr};
        auto cmp = [&](ListNode *a, ListNode *b)
        {
            return a->val > b->val;
        };
        priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> Q(cmp);
        ListNode *cur = &root;
        for (auto x : lists)
            if (x)
                Q.push(x);
        while (!Q.empty())
        {
            auto n = Q.top();
            Q.pop();
            cur = cur->next = n;
            if (n->next)
                Q.push(n->next);
        }
        return root.next;
    }
};