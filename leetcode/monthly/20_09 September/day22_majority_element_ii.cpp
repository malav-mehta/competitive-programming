class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.empty()) return {};
        sort(nums.begin(), nums.end());
        
        int n = nums.size(),
            target = n / 3,
            i = 0,
            prev = nums[0],
            count = 0;
        
        vector<int> res;
        
        while (i < n) {
            if (nums[i] == prev) ++count;
            else {
                prev = nums[i];
                count = 1;
            }
            
            if (count > target) {
                res.push_back(prev);
                while (i + 1 < n && nums[i + 1] == prev) ++i;
            }
            
            ++i;
        }
        
        return res;
    }
};
