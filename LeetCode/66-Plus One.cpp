class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int overhead = 1;
        vector<int> ans;
        
        for (int i = digits.size() - 1; i >= 0; --i) {
            digits[i] += overhead;
            overhead = digits[i] / 10;
            digits[i] %= 10;
        }
        
        if (overhead > 0) {
            string s = to_string(overhead);
            for (char c : s) {
                ans.push_back(c - '0');
            }
        }
        
        for (int i = 0; i < digits.size(); ++i)
            ans.push_back(digits[i]);

        return ans;
    }
};
