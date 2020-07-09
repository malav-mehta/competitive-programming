/* 1486. XOR Operation in an Array, 0 ms */

class Solution {
public:
    int xorOperation(int n, int start) {
        /*
        For `i` in range [0, n), find the XOR of the current result
        value and `start + 2 * i`.
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        int ans = 0;
        
        for (int i = 0; i < n; ++i) {
            ans ^= start + 2 * i;
        }
        
        return ans;
    }
};