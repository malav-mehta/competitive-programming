#include <iostream>
#include <algorithm>
#define max(a, b) (a > b ? a : b)
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, a[100], len(1), mxLen(1);
    cin >> n;
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    sort(a, a + n);
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            ++len;
            mxLen = max(len, mxLen);
        }
        else len = 1;
    }
    
    cout << (mxLen <= (n + 1) / 2 ? "YES" : "NO");
    return 0;
}
