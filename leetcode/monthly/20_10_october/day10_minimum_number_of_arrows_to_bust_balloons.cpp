class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int shots = 0, end = INT_MAX;
        sort(points.begin(), points.end());
        
        for (auto& p : points) {
            if (p[0] > end) {
                ++shots;
                end = p[1];
            }
            
            else end = min(end, p[1]);
        }
        
        return shots + !points.empty();
    }
};
