class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ans, o;
        for (int n : A) {
            if (n % 2) o.push_back(n);
            else ans.push_back(n);
        }
        
        for (int n : o) ans.push_back(n);
        return ans;
    }
};
