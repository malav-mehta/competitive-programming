/* 14. Longest Common Prefix, 4 ms */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*
        1) Find the shortest string in the array. That is the maximum LCP
        length that needs to be checked for. Let S = the length of the
        shortest string.
        
        2) Iterate through the `strs` array x max of S times to check if the
        characters at positions [0, S) are the same (common prefixes).
        
        3) Iteration is continued until there is an uncommon character in the
        prefix. At that point, break out of the loops.
        
        Time complexity: O(Sn) (worst case S=n, O(n^2))
        Space complexity: O(1)
        */
        
        string ans;
        if (strs.size() == 0) {
            return ans;
        }
        
        bool done = false;
        int len = strs[0].size();
        
        for (int i = 0; i < strs.size(); ++i) {
            len = min(len, (int) strs[i].size());
        }
        
        for (int i = 0; i < len; ++i) {
            char c = strs[0][i];
            
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != c) {
                    done = true;
                    break;
                }
            }
            
            if (done) break;
            ans += c;
        }
        
        return ans;
    }
};
