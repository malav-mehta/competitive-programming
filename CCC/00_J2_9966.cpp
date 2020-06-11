#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int m, n, ans(0);
    cin >> m >> n;
    
    for (int i = m; i <= n; ++i) {
        string num = to_string(i), rev;
        
        for (size_t i = num.length() - 1; i >= 0; --i) {
            char c = num[i];
            if (c == '6') rev += '9';
            else if (c == '9') rev += '6';
            else if (c == '0' || c == '1' || c == '8') rev += c;
            else break;
        }
        
        if (num == rev) ++ans;
    }
    
    cout << ans;
    return 0;
}
