class Solution {
public:
    int bitwiseComplement(int N) {
        int m = 1;
        while (m < N) m = (m << 1) | 1;
        return m ^ N;
    }
};
