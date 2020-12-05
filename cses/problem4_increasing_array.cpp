#include <iostream>
#define max(a, b) (a > b ? a : b)
#define ll long long
using namespace std;

int main() {
  ll n, p, c, ans(0);
  cin >> n >> p;
  for (ll i = 1; i < n; ++i) {
    cin >> c;
    ans += max(0, p - c);
    p = max(p, c);
  }

  cout << ans;
  return 0;
}