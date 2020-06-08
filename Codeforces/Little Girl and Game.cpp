#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int chr[26];
    memset(chr, 0, sizeof(chr));
    
    for (int i = 0; i < s.length(); ++i)
        chr[s[i] - 'a'] = !chr[s[i] - 'a'];
    
    int cnt = (int) count(chr, chr + 26, true);
    if (!cnt || cnt % 2) printf("First");
    else printf("Second");
    
    return 0;
}
