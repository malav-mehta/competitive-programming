#include <cstdio>
using namespace std;

int main() {
  int n, tot = -1, tmp, ans = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    scanf("%d", &tmp);
    tot += tmp;
  }

  tot %= n + 1;
  for (int i = 1; i <= 5; ++i)
    if ((tot + i) % (n + 1) != 0)
      ++ans;

  printf("%d\n", ans);
  return 0;
}
