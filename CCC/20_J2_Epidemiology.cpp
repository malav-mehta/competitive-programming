#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int p, n, r, pn(0), ans(0);
    cin >> p >> n >> r;
    
    while (n + pn <= p) {
        ++ans;
        pn += n;
        n *= r;
    }
    
    cout << ans;
    return 0;
}
