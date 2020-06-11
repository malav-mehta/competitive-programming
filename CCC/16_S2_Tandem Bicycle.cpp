#include <iostream>
#include <algorithm>
#define max(a, b) (a > b ? a : b)

using namespace std;
typedef unsigned long long llu;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int t, n, d[100], p[100];
    llu ans(0);
    
    cin >> t >> n;
    
    for (int i = 0; i < n; ++i) cin >> d[i];
    for (int i = 0; i < n; ++i) cin >> p[i];
    
    sort(d, d + n);
    sort(p, p + n);
    
    if (t == 1)
        for (int i = 0; i < n; ++i)
            ans += max(d[i], p[i]);
    
    else
        for (int i = 0; i < n; ++i)
            ans += max(d[i], p[n - i - 1]);
    
    cout << ans;
    return 0;
}
