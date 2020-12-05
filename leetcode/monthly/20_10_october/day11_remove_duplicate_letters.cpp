class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> mp(256), v(256);
        for (char c : s) ++mp[c];
        string res = "0";
        
        for (char c : s) {
            --mp[c];
            if (v[c]) continue;
            while (c < res.back() && mp[res.back()]) {
                v[res.back()] = false;
                res.pop_back();
            }
            res += c;
            v[c] = true;
        }
        
        return res.substr(1);
    }
};
