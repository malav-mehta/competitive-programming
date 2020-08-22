class Solution {
public:
    vector<vector<int>> rects;
    Solution(vector<vector<int>> rects) : rects(rects) {}
    
    vector<int> pick() {
        int total = 0;
        vector<int> rect;
        
        for (vector<int>& r : rects) {
            int area = (r[2] - r[0] + 1) * (r[3] - r[1] + 1);
            total += area;
            if (rand() % total < area) rect = r;
        }
        
        int x = rand() % (rect[2] - rect[0] + 1) + rect[0];
        int y = rand() % (rect[3] - rect[1] + 1) + rect[1];
        return {x, y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */
