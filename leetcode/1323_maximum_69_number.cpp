/* 1323. Maximum 69 Number, 0 ms */

class Solution {
public:
    int maximum69Number (int num) {
        /*
        Go through the digits and convert the first 9 into a 6.
        
        Time complexity: O(logn)
        Space complexity: O(logn)
        */
        
        vector<int> digits;
        int ans(0), done(0), x(1);
        
        while (num) {
            digits.push_back(num % 10);
            num /= 10;
            x *= 10;
        }
        
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] == 6 && !done) {
                digits[i] = 9;
                done = true;
            }
            
            x /= 10;
            ans += digits[i] * x;
        }
        
        return ans;
    }
};
