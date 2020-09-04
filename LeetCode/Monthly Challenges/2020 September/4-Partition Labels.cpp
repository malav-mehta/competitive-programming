class Solution {
public:
    vector<int> partitionLabels(string s) {
        int l[26] = {}, j = 0, a = 0;
        vector<int> r;
        
        for (int i = 0; i < s.size(); ++i)
            l[s[i] - 'a'] = i;
        
        for (int i = 0; i < s.size(); ++i) {
            j = max(j, l[s[i] - 'a']);
            if (i == j) {
                r.push_back(i - a + 1);
                a = i + 1;
            }
        }
        
        return r;
    }
};
