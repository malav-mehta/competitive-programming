class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string r;
        vector<string> ar;
        
        for (int n : nums) ar.push_back(to_string(n));
        sort(ar.begin(), ar.end(), [](string& a, string& b){
           return a + b > b + a; 
        });
        
        for (string s : ar) r += s;
        while (r[0] == '0' && r.size() > 1) r.erase(0, 1);
        return r;
    }
};
