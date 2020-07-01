#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        if (strs.size() == 0)
            return ans;
        
        int mnLen(strs[0].size());
        for (int i = 1; i < strs.size(); ++i)
            mnLen = mnLen < strs[i].size() ? mnLen : strs[i].size();
        
        for (int i = 0; i < mnLen; ++i) {
            char c = strs[0][i];
            
            for (int j = 1; j < strs.size(); ++j)
                if (c != strs[j][i])
                    return ans;
            
            ans += c;
        }
        
        return ans;
    }
};
