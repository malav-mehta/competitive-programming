class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ch;
        vector<char> hc;

        for (char c : s) {
            if ('A' <= c && c <= 'Z') ch.push_back(c - 'A' + 'a');
            if ('a' <= c && c <= 'z') ch.push_back(c);
            if ('0' <= c && c <= '9') ch.push_back(c);
        }

        hc = ch;
        reverse(hc.begin(), hc.end());
        for (int i = 0; i < ch.size(); ++i) if (ch[i] != hc[i]) return false;
        return true;
    }
};