#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int m;
    cin >> m;
    bool nasty = false;

    set<int> factors;
    set<pair<int, int> > divs;

    for (int d = 1; d < m / 2 + 1; ++d) {
      if (m % d == 0) {
        int x = m / d;
        pair<int, int> div = make_pair(min(x, d), max(x, d));

        if (divs.find(div) != divs.end()) {
          continue;
        }

        else {
          divs.insert(div);
        }

        int sum = x + d;
        int diff = abs(x - d);

        if (factors.find(sum) != factors.end() || factors.find(diff) != factors.end()) {
          nasty = true;
          break;
        }

        else {
          factors.insert(sum);
          factors.insert(diff);
        }
      }
    }

    if (nasty)
      cout << m << " is nasty\n";
    else
      cout << m << " is not nasty\n";
  }

  return 0;
}
