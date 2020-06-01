#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int chr[26];
    memset(chr, 0, sizeof(chr));
    
    string a, b, fin;
    cin >> a >> b >> fin;
    
    
    for (char c : a)
        ++chr[c - 'A'];
    for (char c : b)
        ++chr[c - 'A'];
    for (char c : fin)
        --chr[c - 'A'];
    
    for (int i = 0; i < 26; ++i)
        if (chr[i]) {
            printf("NO\n");
            return 0;
        }
    
    printf("YES\n");
    return 0;
}
