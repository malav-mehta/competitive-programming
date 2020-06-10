#include <iostream>
#include <climits>
#define max(a, b) (a > b ? a : b)

using namespace std;
typedef long long ll;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    ll n, l, r, mnL(INT_MAX), mxR(INT_MIN);
    pair<ll, ll> p = make_pair(0, INT_MIN);
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cin >> l >> r;
        
        if (l < mnL) {
            mnL = l;
            p = make_pair(i, r);
        }
        
        else if (l == mnL && r > p.second)
            p = make_pair(i, r);
        
        mxR = max(r, mxR);
    }
    
    if (p.second == mxR) cout << p.first;
    else cout << -1;

    return 0;
}
