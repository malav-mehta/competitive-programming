/* 1252. Cells with Odd Values in a Matrix, 4 ms */

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> r(n), c(m);
        int oddr(0), oddc(0);
        
        for (vector<int> i : indices) {
            ++r[i[0]];
            ++c[i[1]];
        }
        
        for (int x : r) oddr += x % 2;
        for (int x : c) oddc += x % 2;
        
        return oddr * (m - oddc) + oddc * (n - oddr);
    }
};

