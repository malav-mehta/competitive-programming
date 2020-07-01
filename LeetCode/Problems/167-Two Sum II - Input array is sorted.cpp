class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, queue<int>> mp;
        vector<int> ans;
        
        for (int i = 0; i < numbers.size(); ++i)
            mp[numbers[i]].push(i);
        
        for (int i = 0; i < numbers.size(); ++i) {
            int tg = target - numbers[i];
            if (mp.find(tg) != mp.end() && (mp[tg].front() != i || mp[tg].size() > 1)) {
                ans.push_back(i + 1);
                ans.push_back(mp[tg].back() + 1);
                sort(ans.begin(), ans.end());
                break;
            }
        }
        
        return ans;
    }
};
