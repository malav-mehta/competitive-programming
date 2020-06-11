#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int p, n, r, x(0), ans(0);
    cin >> p >> n >> r;
    
    while (n + x <= p) {
        ++ans;
        x += n;
        n *= r;
    }
    
    cout << ans;
    return 0;
}
