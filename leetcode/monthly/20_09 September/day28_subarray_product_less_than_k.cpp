class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k < 2) return 0;
        int prod = 1, ans = 0;
        
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            prod *= nums[i];
            while (prod >= k) prod /= nums[j++];
            ans += i - j + 1;
        }
        
        return ans;
    }
};
