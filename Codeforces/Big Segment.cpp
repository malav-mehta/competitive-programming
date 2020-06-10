#include <iostream>
#define max(a, b) (a > b ? a : b)
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, l, r, mnL(1000000001), mxR(0), ai(0), ar(0);
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cin >> l >> r;
        
        if (l < mnL) {
            mnL = l;
            ai = i;
            ar = r;
        }
        
        else if (l == mnL && r > ar) {
            ai = i;
            ar = r;
        }
        mxR = max(r, mxR);
    }
    
    if (ar == mxR) cout << ai;
    else cout << -1;
    return 0;
}
