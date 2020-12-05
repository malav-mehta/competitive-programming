class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), x = nums[0], l = 0, r = 0;
        for (int i = 0; i < n; ++i) {
            l = (l ? l : 1) * nums[i];
            r = (r ? r : 1) * nums[n - i - 1];
            x = max(x, max(r, l));
        }
        return x;
    }
};
