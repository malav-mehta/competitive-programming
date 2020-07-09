/* 1470. Shuffle the Array, 28 ms */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        /*
        1) Go through through i belongs to [0, n] elements of the array, and
        append them to the resultant array.
        2) During each iteration, append i + n to the resultant array as well.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        vector<int> ans;
        
        for (int i = 0; i < n; ++i) {
            ans.push_back(nums[i]);
            ans.push_back(nums[n + i]);
        }
        
        return ans;
    }
};