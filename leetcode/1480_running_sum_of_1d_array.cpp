/* 1480. Running Sum of 1d Array, 4 ms */

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        /*
        Starting from the second element, adding the sum of the previous element
        and doing this for the rest of the array will ensure that each element 
        represents the cumulative sum of the elements to that position.
        
        Time complexity: O(n) 
        Space complexity: O(1)
        */
        
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        
        return nums;
    }
};