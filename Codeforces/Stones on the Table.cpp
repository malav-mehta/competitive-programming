#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    string s;
    
    cin >> n >> s;
    char prev = s[0];
    
    for (int i = 1; i < n; ++i) {
        if (prev == s[i]) ++ans;
        else prev = s[i];
    }
    
    cout << ans;
    return 0;
}
