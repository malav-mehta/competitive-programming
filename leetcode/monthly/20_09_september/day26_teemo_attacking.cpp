class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int dur = 0, n = timeSeries.size();
        if (n == 0) return 0;
        for (int i = 0; i < n - 1; ++i) dur += min(duration, timeSeries[i + 1] - timeSeries[i]);
        return dur + duration;
    }
};
