#include <algorithm>
#include <iostream>

using namespace std;
typedef long long ll;
ll n, b[2000001], lo(1), hi(1), ans, cnt(1);

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  for (ll i = 0; i < n; ++i)
    cin >> b[i];

  sort(b, b + n);
  ans = b[n - 1] - b[0];

  if (b[0] == b[n - 1])
    cnt = (n * (n - 1)) / 2;

  else {
    for (ll i = 1; i < n; ++i) {
      if (b[i] == b[i - 1])
        ++lo;
      else
        break;
    }

    for (ll i = n - 2; i >= 0; --i) {
      if (b[i] == b[i + 1])
        ++hi;
      else
        break;
    }

    cnt = lo * hi;
  }

  cout << ans << " " << cnt;
  return 0;
}
