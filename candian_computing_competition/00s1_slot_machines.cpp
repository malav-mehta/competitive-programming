#include <bits/stdc++.h>
using namespace std;

int main() {
  int q, i(0), ans(0), m[3], r[] = {35, 100, 10}, p[] = {30, 60, 9};
  cin >> q >> m[0] >> m[1] >> m[2];
  if (m[0] == 0) ans -= 9;

  while (true) {
    if (q-- == 0) break;
    ++ans;
    i = (i + 1) % 3;

    if (r[i] == ++m[i]) {
      m[i] = 0;
      q += p[i];
    }
  }

  cout << "Martha plays " << ans << " times before going broke.";
  return 0;
}
