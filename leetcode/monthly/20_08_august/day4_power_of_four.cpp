class Solution {
public:
    bool isPowerOfFour(int num) {
        if (num < 0) return false;
        uint32_t x = 1 << 29;
        int n = 1;

        while (n <= num) {
            if (num == n) return true;
            if (n < x) n <<= 2;
            else break;
        }

        return false;
    }
};