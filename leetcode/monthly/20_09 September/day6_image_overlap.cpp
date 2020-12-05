class Solution {
public:
    int largestOverlap(vector<vector<int>>& a, vector<vector<int>>& b) {
        unordered_map<int,int> mp;
        vector<int> ma, mb;
        int n = a.size(), r = 0;
        
        for (int i = 0; i < n * n; ++i) {
            int x = i / n, y = i % n;
            if(a[x][y] == 1)
                ma.push_back(x * 100 + y);
            if (b[x][y] == 1)
                 mb.push_back(x * 100 + y);
        }
        
        for (int i : ma) for (int j : mb) ++mp[i - j];
        for (auto it : mp) r = max(r, it.second);
        return r;
     }
};
