#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int ans = 0;
   
    while (b <= 4000000) {
        b += a;
        a = b - a;
        if (b % 2 == 0) ans += b;
    }

    cout << ans;

    return 0;
}
