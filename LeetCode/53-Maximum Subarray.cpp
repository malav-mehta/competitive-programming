class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp = nums[0];
        int ans = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            tmp = max(tmp + nums[i], nums[i]);
            ans = max(tmp, ans);
        }
        
        return ans;
    }
};
