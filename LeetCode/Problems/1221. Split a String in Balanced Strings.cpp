/* 1221. Split a String in Balance Strings, 4 ms */

class Solution {
public:
    int balancedStringSplit(string s) {
        /*
        Iterate through the string, and -1 to the state if it is 'L' else +1.
        -> When the state == 0, that means there has been an equal (balanced)
        amount of L and R, so increment the answer.
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        
        int ans(0), cur(0);
        
        for (char c : s) {
            if (c == 'L') --cur;
            if (c == 'R') ++cur;
            if (cur == 0) ++ans;
        }
        
        return ans;
    }
};