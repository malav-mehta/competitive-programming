class Solution {
private:
    vector<int> x;
    vector<vector<int>> r;
    
    void backtrack(int c, int k, int n) {
        
        if (k == 1) {
            if (n > c && n <= 9) {
                x.push_back(n);
                r.push_back(x);
                x.pop_back();
            }
            return;
        }
        
        int upper_bound = (n - k * (k - 1) / 2) / k;
        for (int i = c + 1; i <= min(upper_bound, 9); ++i) {
            x.push_back(i);
            backtrack(i, k - 1, n - i);
            x.pop_back();
        }
    }
    
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(0, k, n);
        return r;
    }
};
