#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char x;
            scanf(" %c", &x);

            if (x != 'B' && x != 'W' && x != 'G' && x != ' ') {
                cout << "#Color";
                return 0;
            }
        }
    }

    cout << "#Black&White";
    return 0;
}