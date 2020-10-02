class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        vector<int> s;
        search(candidates, 0, s, target, ans);
        return ans;        
    }
    
    void search(vector<int>& num, int next, vector<int>& s, int target, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(s);
            return;
        }
        
        if (next == num.size() || target - num[next] < 0) return;
        s.push_back(num[next]);
        search(num, next, s, target - num[next], ans);
        s.pop_back();
        search(num, next + 1, s, target, ans);
    }
};
