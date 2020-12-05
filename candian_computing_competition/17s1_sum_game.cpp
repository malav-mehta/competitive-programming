#include <cstdio>

int sa[100001];
int sb[100001];

int main() {
  int n, ta(0), tb(0), ans(0);
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i)
    scanf("%d", &sa[i]);

  for (int i = 1; i <= n; ++i)
    scanf("%d", &sb[i]);

  for (int i = 1; i <= n; ++i) {
    ta += sa[i];
    tb += sb[i];

    if (ta == tb)
      ans = i;
  }

  printf("%d", ans);
  return 0;
}
