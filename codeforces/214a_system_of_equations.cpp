#include <cstdio>
using namespace std;

int main() {
  int n, m, ans = 0;
  scanf("%d %d", &n, &m);

  for (int a = 0; a * a <= n; ++a) {
    int b = n - a * a;
    if (a + b * b == m) ++ans;
  }

  printf("%d\n", ans);
  return 0;
}
