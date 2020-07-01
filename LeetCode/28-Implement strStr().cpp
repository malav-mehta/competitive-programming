class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        if (haystack.size() == 0) return -1;
        
        int ans = -1;
        if (haystack.find(needle) != string::npos)
            ans = haystack.find(needle);
        
        return ans;
    }
};
