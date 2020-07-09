#include <iostream>
#include <cstring>
using namespace std;

const int mxN = 100001;
int snack[mxN], vis[mxN];
int n;

int main() {
    memset(vis, 0, sizeof vis);
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> snack[i];

    int c = n;
    for (int i = 1; i <= n; ++i) {
        int x = snack[i];
        vis[x] = 1;

        if (x == c) {
            while (vis[c]) cout << c-- << " ";
            cout << "\n";
        }

        else cout << "\n";
    }

    return 0;
}