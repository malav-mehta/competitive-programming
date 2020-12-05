#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

int main() {
  int n, v[105];
  double ans(INF);
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
    scanf("%d", &v[i]);
  sort(v, v + n);

  for (int i = 1; i < n; ++i) {
    int a(abs(v[i] - v[i - 1]));
    int b(abs(v[i + 1] - v[i]));
    ans = min(ans, a / 2.0 + b / 2.0);
  }

  printf("%.1f\n", ans);
  return 0;
}
