/* 13. Roman to Integer, 8 ms */

class Solution {
public:
    int romanToInt(string s) {
        /*
        Dictionary for each roman numeral (stored in an array rather than a
        unordered map for better performance). There are basically two types of
        operations that are done to create the resultant integer:
        
        (BigNum)(SmallNum) or (SmallNum)(SmallNum) or (BigNum BigNum) | VI
        -> add each num to the result
        
        (SmallNum)(BigNum) | IV
        -> subtract the smaller num from the bigger num
        
        Basically, we need to iterate from the back of the number, and check if
        a number at a particular position is larger than the the one at the next
        index. If it is, then add them together (operation type 1). Otherwise,
        substract it.
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        if (s.empty()) return 0;
        int roman[24];
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;
        
        int ans = roman[s.back() - 'A'];
        for (int i = s.size() - 2; i >= 0; --i) {
            int tmp = roman[s[i] - 'A'];
            if (tmp < roman[s[i + 1] - 'A']) {
                ans -= tmp;
            }
            
            else {
                ans += tmp;
            }
        }
        
        return ans;
    }
};
