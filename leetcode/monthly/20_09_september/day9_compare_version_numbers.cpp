class Solution {
public:
    int compareVersion(string a, string b) {
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        int x = 0, y = 0;
        
        while (i < n || j < m) {
            while (i < n && a[i] != '.') {
                x = x * 10 + (a[i] - '0');
                ++i;
            }
            
            while (j < m && b[j] != '.') {
                y = y * 10 + (b[j] - '0');
                ++j;
            }
            
            if (x > y) return 1;
            else if (x < y) return -1;
            
            ++i; ++j;
            x = 0; y = 0;
        }
        
        return 0;
    }
};
