#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2, 0);
        int search;
        
        for (int i = 0; i < nums.size(); ++i) {
            search = target - nums[i];
            
            if (mp.find(search) != mp.end()) {
                ans[0] = mp[search];
                ans[1] = i;
                return ans;
            }
            
            mp[nums[i]] = i;
        }
        
        return ans;
    }
};
