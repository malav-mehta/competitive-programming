#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    cout << (k <= (n + 1) / 2 ? 2 * k - 1 : 2 * (k - (n + 1) / 2));
    return 0;
}
