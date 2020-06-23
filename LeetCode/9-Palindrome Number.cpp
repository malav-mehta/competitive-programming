#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string rev;
        
        for (size_t i = num.size() - 1; i >= 0; --i)
            rev += num[i];
        
        return num == rev;
    }
};
