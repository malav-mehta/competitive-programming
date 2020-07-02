class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        int cnt = 0;
        unsigned long long int factor;
        
        while (1) {
            factor = (unsigned long long int) pow(5, ++cnt);
            
            if (n % factor == n)
                break;
            
            else
                ans += n / factor;
        }
        
        return ans;
    }
};
