/* 1342. Number of Steps to Reduce a Number to Zero, 4 ms */

class Solution {
public:
    int numberOfSteps (int num) {
        /*
        Follow the outline steps while the number is not 0.
        
        Time complexity: O(log2n)
        Space complexity: O(1)
        */
        
        int ans(0);
        
        while (num) {
            if (num & 1) --num;
            else num /= 2;
            ++ans;
        }
        
        return ans;
    }
};