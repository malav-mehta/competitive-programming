class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if (!s.size()) return false;
        string x = (s + s).substr(1, s.size() * 2 - 2);
        return x.find(s) != string::npos;
    }
};
