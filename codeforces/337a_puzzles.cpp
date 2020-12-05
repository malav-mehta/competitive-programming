#include <algorithm>
#include <cstdio>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main() {
  int n, m, ans;
  scanf("%d %d", &n, &m);

  int f[m];
  for (int i = 0; i < m; ++i)
    scanf("%d", &f[i]);

  sort(f, f + m);
  ans = f[n - 1] - f[0];
  for (int i = 1; i <= m - n; ++i)
    ans = min(ans, f[n + i - 1] - f[i]);

  printf("%d", ans);
  return 0;
}
