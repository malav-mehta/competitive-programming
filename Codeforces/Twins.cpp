#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, sum(0), usr(0), ans(0); cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) sum += a[i];
    
    for (int i = n - 1; i >= 0; --i) {
        usr += a[i];
        sum -= a[i];
        ++ans;
        if (usr > sum) break;
    }
    
    cout << ans;
    return 0;
}