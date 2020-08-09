#include <cmath>
#include <iostream>
using namespace std;

int main() {
    const int mx = 1000;

    for (int a = 1; a < mx; ++a)
        for (int b = 1; b < mx; ++b)
            for (int c = 1; c < mx; ++c)
                if (a * a + b * b == c * c && a + b + c == 1000)
                    cout << a << " " << b << " "  << c << " " << a * b * c << endl;

    return 0;
}
