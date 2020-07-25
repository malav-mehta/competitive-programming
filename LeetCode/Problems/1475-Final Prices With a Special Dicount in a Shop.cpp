/* 1475. Final Prices With a Special Dicount in a Shop, 4 ms */

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        /*
        Brute force.
        
        Time complexity: O(n ^ 2)
        Space complexity: O(n)
        */
        
        vector<int> ans;
        
        for (int i = 0; i < prices.size(); ++i) {
            int discount = 0;
            
            for (int j = i + 1; j < prices.size(); ++j) if (prices[j] <= prices[i]) {
                discount = prices[j];
                break;
            }
            
            ans.push_back(prices[i] - discount);
        }
        
        return ans;
    }
};
