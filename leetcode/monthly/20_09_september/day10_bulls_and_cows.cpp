class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0, b = 0;
        unordered_map<char, int> mp;
        unordered_set<int> s;
        for (char c : secret) ++mp[c];
        
        for (int i = secret.size() - 1; i >= 0; --i) {
            if (guess[i] == secret[i]) {
                s.insert(i);
                ++a;
                --mp[guess[i]];
            }
        }
        
        for (int i = secret.size() - 1; i >= 0; --i) {
            if (s.find(i) == s.end() && mp.find(guess[i]) != mp.end() && mp[guess[i]] > 0) {
                --mp[guess[i]];
                ++b;
            }
        }
        
        return to_string(a) + "A" + to_string(b) + "B";
    }
};
