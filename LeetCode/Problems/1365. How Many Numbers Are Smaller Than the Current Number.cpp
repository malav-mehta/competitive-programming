/* 1365. How Many Numbers Are Smaller Than the Current Number, 12 ms */

typedef long long ll;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        /*
        1) Construct a frequency array of each number (numbers are in range [0, 100]).
        
        2) Make a prefix array to hold the amount of numbers which are less than each
        number from [0, 100].
        
        3) Construct the final answer array by checking through the prefix array and
        pushing the amount of numbers which are smaller.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        int n = nums.size();
        vector<ll> a(101), b(101);
        vector<int> ans(n);
        
        for (int i = 0; i < n; ++i) {
            ++a[nums[i]];
        }
        
        for (int i = 1; i < 101; ++i) {
            b[i] = b[i - 1] + a[i - 1];
        }
        
        for (int i = 0; i < n; ++i) {
            ans[i] = b[nums[i]];
        }
        
        return ans;
    }
};