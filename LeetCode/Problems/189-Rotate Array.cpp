class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int n = nums.size();
        int tmp = k;
        vector<int> ans;
        
        while (k)
            ans.push_back(nums[n - k--]);
        
        for (int i = 0; i < n - tmp; ++i)
            ans.push_back(nums[i]);
        
        nums = ans;
    }
};
