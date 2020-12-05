/* 1. Two Sum, 20 ms */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        
        /*
        Insert each element of the nums array into the unordered_map for O(1)
        key lookup time. Iterate through the other elements to check if the 
        complement exists in the map. When the complement is found, the indices
        of the two complements are returned.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        for (int i = 0; i < nums.size(); ++i) {
            if (mp.find(target - nums[i]) != mp.end()) {
                return {mp[target - nums[i]], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {-1, -1};
    }
};