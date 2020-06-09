#include <iostream>
using namespace std;

int n, k;
int a[100000];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    int ans(n - 1), t(a[k -1 ]);
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] == t) ans = i;
        else break;
    }
    
    cout << (ans <= k - 1 ? ans : -1);
    return 0;
}
