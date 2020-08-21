class Solution {
private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
public:
    string toGoatLatin(string S) {
        string ans;
        istringstream iss(S);
        vector<string> s(istream_iterator<string>{iss}, istream_iterator<string>());
        
        for (int i = 0; i < s.size(); ++i) {
            if (!isVowel(s[i][0])) {
                s[i].push_back(s[i][0]);
                s[i].erase(s[i].begin());
            }
            
            ans += " " + s[i] + "ma";
            for (int j = 0; j <= i; ++j) ans.push_back('a');
        }
        
        ans.erase(ans.begin());
        return ans;
    }
};
