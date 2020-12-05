/* 1450. Number of Students Doing Homework at a Given Time, 0 ms */

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        /*
        Linear iteration through the start and end times to check if the
        query time lies in between.
        
        Time complexity: O(n)
        Space complexity: O(1)
        */
        
        int ans(0);
        
        for (int i = 0; i < startTime.size(); ++i) {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                ++ans;
        }
        
        return ans;
    }
};
