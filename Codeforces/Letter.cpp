#include <iostream>
#include <cstring>
using namespace std;

int val(char c) {
    if (c >= 'a')
        return c - 'a';
    return c - 'A' + 26;
}

int main() {
    int chr[52];
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    memset(chr, 0, sizeof(chr));
    
    for (char c : s1)
        ++chr[val(c)];
    
    for (char c : s2)
        --chr[val(c)];
    
    for (int x : chr)
        if (x < 0) {
            cout << "NO";
            return 0;
        }
    
    cout << "YES";
    return 0;
}
