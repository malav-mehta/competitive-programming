#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mp;
        mp.insert(make_pair(')', '('));
        mp.insert(make_pair(']', '['));
        mp.insert(make_pair('}', '{'));
        
        for (char c : s) {
            if (mp.find(c) != mp.end()) {
                char top;
                
                if (stk.empty()) top = '\0';
                else {
                    top = stk.top();
                    stk.pop();
                }
                
                if (mp[c] != top) return false;
            }
            
            else {
                stk.push(c);
            }
        }
        
        return stk.empty();
    }
};
