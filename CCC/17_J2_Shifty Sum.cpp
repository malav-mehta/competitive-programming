#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, ans(0);
    cin >> n >> k;
    ans += n;
    
    for (int i = 1; i <= k; ++i) {
        n *= 10;
        ans += n;
    }
    
    cout << ans;
    return 0;
}
