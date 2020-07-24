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
    int getDecimalValue(ListNode* head) {
        /*
        Add all the values of the head into the bits vector,
        and loop through it in reverse after the linked list
        has been traversed.

        Then, add the bits to the answer.

        Time complexity: O(n), n is the # of bits in the LL 
        Space complexity: O(n)
         */
        vector<int> bits;
        int ans = 0;
        
        while (head) {
            bits.push_back(head->val);
            head = head->next;
        }
        
        int p = 0;
        for (int i = bits.size() - 1; i >= 0; --i) {
            ans += bits[i] << p++;
        }   
        
        return ans;
    }
};
