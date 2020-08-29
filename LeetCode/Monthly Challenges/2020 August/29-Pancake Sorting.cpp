class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> ans;
        int n = A.size(), p;
        
        for (int i = n; i > 0; --i) {
            p = distance(A.begin(), find(A.begin(), A.end(), i));
            if (p == i - 1) continue;
            
            if (p) {
                ans.push_back(p + 1);
                reverse(A.begin(), A.begin() + p + 1);
            }
            
            ans.push_back(i);
            reverse(A.begin(), A.begin() + i);
        }

        return ans;
    }
};
