#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n, ans = 0;
  scanf("%d %d", &m, &n);

  for (int i = m; i <= n; ++i) {
    int j = i, k = 0, x;
    while (j) {
      x = j % 10;
      k *= 10;
      j /= 10;
      if (x == 6)
        k += 9;
      else if (x == 9)
        k += 6;
      else if (x == 0 || x == 1 || x == 8)
        k += x;
      else
        break;
    }
    if (i == k) ++ans;
  }

  printf("%d", ans);
  return 0;
}
