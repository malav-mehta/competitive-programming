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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;
        int len = 1;
        ListNode *h = head, *t = head;
        
        while (t->next) {
            ++len;
            t = t->next;
        }
        
        t->next = head;
        if (k %= len) for (int i = 0; i < len - k; ++i) t = t->next;
        
        h = t->next;
        t->next = NULL;
        return h;
    }
};
