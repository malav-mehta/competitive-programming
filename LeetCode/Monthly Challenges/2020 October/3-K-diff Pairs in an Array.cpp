class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        for (int n : nums) ++mp[n];
        for (auto& p : mp) {
            if ((k > 0 && mp.find(p.first + k) != mp.end()) || (k == 0 && mp[p.first] > 1)) {
                ++ans;
            }
        }
        
        return ans;
    }
};
