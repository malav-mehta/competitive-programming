#include <iostream>
#include <cmath>
#define HASH 13
using namespace std;

long long hsh (string s) {
    long long ans = 0;
    
    for (char c : s)
        ans += c - 'a' * pow(HASH, c - 'a');
    
    return ans;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    long long prev = hsh(a) + hsh(b);
    long long cur = hsh(c);
    
    if (prev == cur) printf("YES");
    else printf("NO");
    return 0;
}
