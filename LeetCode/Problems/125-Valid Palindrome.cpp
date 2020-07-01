class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> a;
        if (s.size() == 0)
            return true;
        
        for (char c : s) {
            if ('a' <= c && c <= 'z')
                a.push_back(c);
            
            else if ('A' <= c && c <= 'Z')
                a.push_back(c - 'A' + 'a');
            
            else if ('0' <= c && c <= '9')
                a.push_back(c);
        }
        
        
        vector<char> b(a);
        reverse(b.begin(), b.end());
        
        for (int i = 0; i < a.size(); ++i)
            if (a[i] != b[i])
                return false;
        
        return true;
    }
};
