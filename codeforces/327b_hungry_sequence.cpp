#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  ll n, x(0);
  cin >> n;

  for (ll i = 1; x < n; ++i) {
    cout << n + i << " ";
    ++x;
  }
}
