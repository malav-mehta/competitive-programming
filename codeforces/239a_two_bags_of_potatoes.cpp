#include <cstdio>

int main() {
  int y, k, n;
  scanf("%d %d %d", &y, &k, &n);
  int x = k - y % k;

  if (x > n - y)
    printf("-1");
  else
    while (x <= n - y) {
      printf("%d ", x);
      x += k;
    }

  return 0;
}
