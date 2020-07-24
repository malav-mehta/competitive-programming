/* 1266. Minimum Time Visiting All Points, 16 ms */

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        /*
        The minimum time it takes between two points is calculated as such:
        dx = abs(x2 - x1), i.e the difference in the x coordinates
        dy = abs(y2 - y1), i.e the difference in the y coordinates
        
        Travelling diagonal takes the same time as travelling in a single
        direction. Therefore, it is best to travel the minimum of the dx and dy
        with diagonals, since this can be done with diagonals in half the time.
        
        The remaining distance is simply the leftover of
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        
        int ans = 0;
        
        for (int i = 1; i < points.size(); ++i) {
            int dx = abs(points[i][0] - points[i - 1][0]);
            int dy = abs(points[i][1] - points[i - 1][1]);
            
            ans += max(dx, dy);
        }
        
        return ans;
    }
};
