class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size()) return false;
        if (A.empty()) return false;
        if (A == B && set(A.begin(), A.end()).size() < A.size()) return true;
        
        char a[26] = {};
        int cnt = 0;
        for (char c : A) ++a[c - 'a'];
        for (char c : B) --a[c - 'a'];
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] != B[i]) ++cnt;
            if (cnt > 2) return false;
        }
        
        if (cnt != 2) return false;
        for (int x : a) {
            if (x) return false;
        }
        
        return true;
    }
};
