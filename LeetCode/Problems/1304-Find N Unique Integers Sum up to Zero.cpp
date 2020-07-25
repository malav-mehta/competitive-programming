/* 1304. Find N Unique Integers Sum up to Zero, 4 ms */

class Solution {
public:
    vector<int> sumZero(int n) {
        /*
        Add n/2 complement integers to the array (i.e -1 and 1).
        If n is odd, add zero to the array.
        
        Time complexity: O(n)
        Space complexity: O(n)
        */
        
        vector<int> ans;
                
        if (n % 2) {
            --n; 
            ans.push_back(0);
        }
        
        
        for (int i = 1; i <= n / 2; ++i) {
            ans.push_back(-i);
            ans.push_back(i);
        }
       
        return ans;
    }
};
