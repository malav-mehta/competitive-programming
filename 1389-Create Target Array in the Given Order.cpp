/* 1389. Create Target Array in the Giver Order, 4 ms */

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {   
        vector<int> target;
  
        for (int i = 0; i < nums.size(); ++i) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    }
};