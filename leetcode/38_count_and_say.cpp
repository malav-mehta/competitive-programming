class Solution {
public:
    string nextIter(string n) {
        int cur = n[0];
        int cnt = 1;
        string s;
        
        for (int i = 1; i < n.size(); ++i) {
            if (n[i] == cur)
                ++cnt;
            
            else {
                s += (cnt + '0');
                s += cur;
                cur = n[i];
                cnt = 1;
            }
        }
        
        s += (cnt + '0');
        s += cur;
        return s;
    }
    
    string countAndSay(int n) {
        string ans = "1";
        
        for (int i = 1; i < n; ++i) {
            ans = nextIter(ans);
        }
        
        return ans;
    }
};
