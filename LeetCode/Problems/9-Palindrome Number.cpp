/* 9. Palindrome Number, 8 ms */

class Solution {
public:
    bool isPalindrome(int x) {
        /*
        Directly false if the number is negative (leading `-` sign) or if the number
        has trailing zeroes (there are no leading zeroes).
        
        Otherwise, construct the half reversed number iteratively — take the last half
        of the number and compare it to the first half. If they are equal, return true.
        
        Time complexity: O(logn)
        Space complexity: O(n)
        */
        
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int rev = 0;
        
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        return x == rev || x == rev / 10;
    }
};