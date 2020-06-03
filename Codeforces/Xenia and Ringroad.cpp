#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n, m, prev = 1, a, ans = 0;
    cin >> n >> m;
    for (ll i = 0; i < m; ++i) {
        cin >> a;
        if (a - prev >= 0) ans += a - prev;
        else ans += n - prev + a;
        prev = a;
    }
    
    cout << ans;
    return 0;
}
