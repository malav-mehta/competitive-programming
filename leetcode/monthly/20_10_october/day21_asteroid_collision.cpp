class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> r;
        
        for (int n : asteroids) {
            bool d = false;
            while (r.size() && r.back() > 0 && n < 0 && !d) {
                if (r.back() >= -n) d = true;
                if (r.back() <= -n) r.pop_back();
            }
            if (!d) r.push_back(n);
        }
        
        return r;
    }
};
