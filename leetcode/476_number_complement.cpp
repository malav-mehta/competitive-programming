class Solution {
public:
    int findComplement(int num) {
        int len = (int) log2(num) + 1;
        int mask = (long long int) (1 << len) - 1 ;
        return num ^ mask;
    }
};
