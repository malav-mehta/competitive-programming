class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int cur = 1;
        int i = 0;
        
        while (candies > 0) {
            ans[i] += cur;
            candies -= cur;
            cur = min(cur + 1, candies);
            i = (i + 1) % num_people;
        }
        
        return ans;
    }
};
