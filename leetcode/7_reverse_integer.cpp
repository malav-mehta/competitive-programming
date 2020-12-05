/* 7. Reverse Integer, 4 ms */

class Solution {
public:
    int reverse(int x) {
        /*
        Simple reversal of `x` and checking if there are integer limit
        overflows.
        
        Time complexity: O(logn)
        Space complexity: O(1)
        */
        
        long long n = (long long) x;
        long long r = 0;
        
        while (n != 0) {
            r = r * 10 + n % 10;
            n /= 10;
        }
        
        if (r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        
        return (int) r;
    }
};
