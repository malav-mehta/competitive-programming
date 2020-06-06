#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int k;
    string s;
    map<char, int> mp;
    vector<char> ans;
    
    cin >> k;
    cin >> s;
    
    for (char c : s) {
        if (mp.find(c) == mp.end()) mp.insert(make_pair(c, 1));
        else ++mp[c];
    }
    
    for (auto it : mp) {
        if (it.second % k) {
            cout << "-1";
            return 0;
        }
        
        for (int i = 0; i < it.second / k; ++i) ans.push_back(it.first);
    }
    
    while (k--)
        for (int i = 0; i < ans.size(); ++i)
            cout << ans[i];
        
    return 0;
}
