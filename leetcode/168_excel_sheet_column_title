class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        
        while (n) {
            if (!(n % 26)) {
                ans += 'Z';
                n = n / 26 - 1;
            }
            
            else {
                ans += 'A' + (n - 1) % 26;
                n /= 26;
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
