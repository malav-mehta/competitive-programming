class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) return {};
        if (intervals.size() == 1) return {-1};
        
        vector<int> ans;
        map<int, int> mp;
        int right = INT_MIN;
        int s = intervals.size();
        
        for (int i = 0; i < s; ++i) {
            mp.insert(make_pair(intervals[i][0], i));
            right = max(right, intervals[i][0]);
        }
        
        for (int i = 0; i < intervals.size(); ++i) {
            if (intervals[i][1] <= right)
                ans.push_back(mp.upper_bound(intervals[i][1] - 1)->second);
            else
                ans.push_back(-1);
        }
        
        return ans;
    }
};
