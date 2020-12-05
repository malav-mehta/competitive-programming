class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        /*
         
        O(n^2) solution
        Basic DP: store max subsequence length that ends @ each index position.
         
        vector<int> dp(nums.size(), 1);
        int ans = 1;

        for (int i = 0;  i < nums.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j] + 1);
         }

         ans = max(ans, dp[i]);
        }

        return ans;
         */
        
        /*
        O(nlogn) solution
         */
        set<int> s;
        set<int>::iterator it;
        s.clear();
        
        for (int i = 0; i < nums.size(); ++i) {
            it = s.lower_bound(nums[i]);
            if (it != s.end()) s.erase(it);
            s.insert(nums[i]);
        }
        
        return s.size();
    }
};
