#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int nums[4];
    memset(nums, 0, sizeof(nums));
    
    string in, out;
    cin >> in;
    
    
    for (char c : in)
        if (c != '+')
            ++nums[c - '0'];
    
    for (int i = 1; i <= 3; ++i) {
        for (int j = 0; j < nums[i]; ++j) {
            out += (i + '0');
            out += '+';
        }
    }
    
    cout << out.substr(0, out.length() - 1);
    return 0;
}
