class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long int start = 1;
        vector<int> row;
        ++rowIndex;
        
        for (int c = 1; c <= rowIndex; ++c) {
            row.push_back(start);
            start = (int) (start * (rowIndex - c) / c);
        }
        
        return row;
    }
};
