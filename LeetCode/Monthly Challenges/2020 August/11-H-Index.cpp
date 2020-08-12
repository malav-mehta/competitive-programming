class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(), cnt = 0;
        vector<int> b(n + 1);
        
        for (int c : citations) {
            if (c >= n) b[n]++;
            else b[c]++;
        }
        
        for (int i = n; i >= 0; --i) {
            cnt += b[i];
            if (cnt >= i) return i;
        }
        
        return 0;
    }
};

