/* 1431. Kids With the Greatest Number of Candies, 8 ms */

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        /*
        Do 2-passes of the array:
        
        1) First pass: find the greatest number of candies in the array.
        
        2) Second pass: check if assigning the extra candies to this element
        will have it equal/beat the max amount.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        vector<bool> ans;
        if (candies.empty()) return ans;
        
        int mx = candies[0];
        for (int n : candies) mx = max(mx, n);
        
        for (int n : candies) ans.push_back(n + extraCandies >= mx);
        return ans;
    }
};