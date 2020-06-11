#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    
    int chr[26], wild(0), res(0);
    memset(chr, 0, sizeof(chr));
    
    string a, b;
    cin >> a >> b;
    
    
    for (char c : a)
        ++chr[c - 'a'];
    
    for (char c : b) {
        if (c == '*')
            ++wild;
        else
            --chr[c - 'a'];
    }
    
    for (int i = 0; i < 26; ++i) {
        res += chr[i];
        if (chr[i] < 0) {
            cout << "N";
            return 0;
        }
    }
    
    if (res == wild)
        cout << "A";
    else
        cout << "N";
    
    return 0;
}
