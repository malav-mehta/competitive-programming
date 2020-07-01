class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        if (s.size() == 0) return 0;
        
        for (int i = s.size() - 1; i >= 0; --i) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                ++ans;
            
            if (s[i] == ' ') {
                if (ans == 0) continue;
                else return ans;
            }
        }
        
        return ans;
    }
};
