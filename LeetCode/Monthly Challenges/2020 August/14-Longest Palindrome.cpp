class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0, ch[128] = {};
        for (char c : s) ++ch[c];
        
        for (int n : ch) {
            ans += n / 2 * 2;
            if (ans % 2 == 0 && n % 2 == 1)
                ++ans;
        }
        
        return ans;
    }
};
