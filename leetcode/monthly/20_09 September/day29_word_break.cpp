class Solution {
public:
    bool wordBreak(string s, vector<string> &wordDict) {
        unordered_set<string> words(wordDict.begin(), wordDict.end());
        if (words.empty()) return false;
        
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = i - 1; j >= 0; --j) {
                if (dp[j]) {
                    string word = s.substr(j, i - j);
                    if (words.find(word) != words.end()) {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        
        return dp[s.size()];
    }
};
