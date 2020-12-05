class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int s[1001] = {};
        for (auto t : trips) s[t[1]] += t[0], s[t[2]] -= t[0];
        for (int x : s) {
            if (capacity < 0) break;
            capacity -= x;
        }
        return capacity >= 0;
    }
};
