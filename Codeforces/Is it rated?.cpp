#include <iostream>
using namespace std;

int main() {
    int n, x, y, c = 0;
    cin >> n >> x >> y;
    int m = n;

    if (x ^ y) {
        cout  << "rated";
        return 0;
    }

    while (--n) {
        int a, b;
        cin >> a >> b;

        if (a ^ b) {
            cout << "rated";
            return 0;
        }

        else if (a <= x)
            ++c;

        x = a;
        y = b;
    }

    if (c == m - 1)
        cout << "maybe";

    else
        cout << "unrated";

    return 0;
}
