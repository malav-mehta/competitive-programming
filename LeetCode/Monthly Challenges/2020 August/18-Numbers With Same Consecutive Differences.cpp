class Solution {
public:
    set<int> nums;
    
    vector<int> numsSameConsecDiff(int n, int k) {
        for (int i = 0; i <= 9; ++i)
            dfs(0, i, k, n, 1);
        
        const int minN = pow(10, n - 1);
        vector<int> ans;
        
        for (auto m : nums)
            if (m >= minN) ans.push_back(m);
        
        if (n == 1) ans.push_back(0);
        return ans;
    }
    
    void dfs(int x, int y, int& k, int& n, int l) {
        if (0 <= y && y <= 9 && l <= n) {
            int p = y;
            x = x * 10 + y;
            if (l == n) nums.insert(x);
            
            else {
                dfs(x, p + k, k, n, l + 1);
                dfs(x, p - k, k, n, l + 1);
            }
        }
    }
};
