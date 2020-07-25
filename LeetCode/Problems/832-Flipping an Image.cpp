/* 832. Flipping and Image, 8 ms */

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        /*
        Brute force.
        
        Time complexity: O(n^2)
        Space complexity: O(1)
        */
        
        for (vector<int>& r : A) {
            for (int& n : r) n = !n;
            reverse(r.begin(), r.end());
        }
        
        return A;
    }
};
