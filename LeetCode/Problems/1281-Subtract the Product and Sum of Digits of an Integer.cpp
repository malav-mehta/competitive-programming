/* 1281. Subtract the Product and Sum of Digits of an Integer, 0 ms */

class Solution {
public:
    int subtractProductAndSum(int n) {
        int s(0), p(1), c;
        
        /*
        Pop the digits of the number from right to left and find their
        product and their sum by applying the corresponding operations.
        
        Time complexity: O(logn)
        Space complexity: O(1)
        */
        
        while (n) {
            c = n % 10;
            n /= 10;
            p *= c;
            s += c;
        }
            
        return p - s;
    }
};