#include <iostream>
#include <cmath>
#define HASH 13
using namespace std;

int hsh (string s) {
    int ans = 0;
    
    for (char c : s)
        ans += c - 'a' * pow(HASH, c - 'a');
    
    return ans;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int prev = hsh(a) + hsh(b);
    int cur = hsh(c);
    
    if (prev == cur) printf("YES");
    else printf("NO");
    return 0;
}
