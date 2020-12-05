class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int t = 0, d = 0, s = 0, n = gas.size();
        
        for (int i = 0; i < n; ++i) {
            t += gas[i];
            if (t >= cost[i]) t -= cost[i];
            else {
                d += cost[i] - t;
                s = i + 1;
                t = 0;
            }
        }
        
        if (s == n || t < d) return -1;
        return s;
    }
};
