class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0, pre = 0;
        sort(intervals.begin(), intervals.end());

        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] < intervals[pre][1]) {
                ++ans;
                if (intervals[i][1] < intervals[pre][1])
                    pre = i;
            }
            else pre = i;
        }
        return ans;
    }
};
