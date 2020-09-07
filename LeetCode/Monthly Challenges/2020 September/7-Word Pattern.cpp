class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, char> p;
        unordered_map<string, char> s;
        string a, b, w;
        
        char i = 'a';
        for (char c : pattern) {
            if (p.find(c) == p.end()) p[c] = i++;
            a += p[c];
        }
        
        i = 'a';
        for (char c : str) {
            if (c == ' ') {
                if (s.find(w) == s.end()) s[w] = i++;
                b += s[w];
                w = "";
            }
            
            else w += c;
        }
        
        if (!w.empty()) {
            if (s.find(w) == s.end()) s[w] = i++;
            b += s[w];
        }
        
        cout << a << '\n' << b;
        return a == b;
    }
};
