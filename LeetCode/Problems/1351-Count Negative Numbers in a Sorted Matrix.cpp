/* 1351. Count Negative Numbers in a Sorted Matrix, 36 ms */

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*
        Brute force through the grid to check for negatives.
        
        Time complexity: O(n^2)
        Space complexity: O(n)
        */
        
        int ans(0);
        
        for (vector<int>& v: grid)
            for (int n : v)
                ans += n < 0;
                
        return ans;
    }
};
