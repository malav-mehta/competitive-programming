class Solution {
 public:
  int search(vector<int>& nums, int target) {
    auto i = lower_bound(nums.begin(), nums.end(), target);
    return (i != nums.end() && *i == target ? distance(nums.begin(), i) : -1);
  }
};
