/* 1374. Generate a String with Characters That Have Off Counts, 0 ms */

class Solution {
public:
    string generateTheString(int n) {
        /*
        If n is odd, then add any single character n times. If n is even, then add
        character X once and character Y n - 1 times.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        string ans;
        
        if (n % 2 == 0) ans += n-- % 25 + 1 + 'a';
        while (n--) ans += 'a';
        
        return ans;
    }
};
