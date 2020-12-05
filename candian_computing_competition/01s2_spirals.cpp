#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, m, n, i, j, d = 0, p = 1;
  double root;
  int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
  cin >> x >> y;

  root = sqrt(y - x + 1);
  m = ceil(root);
  n = round(root);

  i = (m - 1) / 2;
  j = (n - 1) / 2;

  int sp[m][n];
  memset(sp, 0, sizeof(sp));

  while (x <= y) {
    for (int a = 0; a < p && x <= y; ++a) {
      sp[i][j] = x;
      i += dir[d][0];
      j += dir[d][1];

      ++x;
      if (x > y)
        break;
    }

    d = (d + 1) % 4;
    if (d % 2 == 0)
      ++p;
  }

  for (int q = 0; q < m; ++q) {
    for (int r = 0; r < n; ++r) {
      if (sp[q][r] != 0)
        cout << sp[q][r];

      cout << " ";
    }

    cout << "\n";
  }

  return 0;
}