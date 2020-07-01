class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        for (int r = 1; r <= numRows; ++r) {
            int start = 1;
            vector<int> row;
            
            for (int c = 1; c <= r; ++c) {
                row.push_back(start);
                start = start * (r - c) / c;
            }
            
            triangle.push_back(row);
        }
        
        return triangle;
    }
};
