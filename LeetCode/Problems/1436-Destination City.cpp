/* Destination City, 32 ms */

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        /*
        Construct outdegree map of the nodes in the graph.
        
        Time complexity: O(V + E)
        Space complexity: O(V + E)
        */
        
        unordered_map<string, int> mp;
        
        for (vector<string> p : paths) {
            ++mp[p[0]];
            if (mp.find(p[1]) == mp.end()) mp.insert(make_pair(p[1], 0));
        }
        
        for (auto it : mp) if (it.second == 0)
            return it.first;
        
        return "";
    }
};
