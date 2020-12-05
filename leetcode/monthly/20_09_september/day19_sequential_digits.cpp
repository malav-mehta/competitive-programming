class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> r;
        for (int i = 1; i <= 9; ++i) {
            int x = i;
            int n = x;
            while (n <= high) {
                if (n >= low) r.push_back(n);
                if (x == 9) break;
                n = n * 10 + ++x;
            }
        }
        sort(r.begin(), r.end());
        return r;
    }
};
