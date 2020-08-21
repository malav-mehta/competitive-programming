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
    void reorderList(ListNode* head) {
        vector<int> num, res;
        ListNode* h = head;
        
        while (h) {
            num.push_back(h->val);
            h = h->next;
        }
        
        int i = 0, j = num.size() -1;
        while (i < j) {
            res.push_back(num[i++]);
            res.push_back(num[j--]);
        }
        
        if (num.size() % 2) res.push_back(num[i]);
        
        i = 0;
        while (head) {
            head->val = res[i++];
            head = head->next;
        }
    }
};
