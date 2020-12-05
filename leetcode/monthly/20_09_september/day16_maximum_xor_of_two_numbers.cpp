class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int r = 0, x = 0;
        
        for (int i = 31; i >= 0; i--) {
            unordered_set<int> s;
            x = x | (1 << i);
            
            for (int n : nums) {
                int left = n & x;
                s.insert(left);
            }
            
            int greedy = r | (1 << i);
            for (int left : s) {
                int y = left ^ greedy;
                
                if (s.find(y) != s.end()) {
                    r = greedy;
                    break;
                }
            }
        }
        
        return r;
    }
};
