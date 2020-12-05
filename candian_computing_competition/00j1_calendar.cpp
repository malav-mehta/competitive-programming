#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x, done = 0;
  scanf("%d %d", &n, &m);
  printf("Sun Mon Tue Wed Thr Fri Sat\n");

  for (int i = 0; i < n - 1; ++i)
    printf("    ");

  for (int i = n; i < n + m; ++i) {
    x = i - n + 1;
    printf("%3d", x);
    if (i % 7 == 0) {
      printf("\n");
      done = i == n + m - 1;
    } else if (i != n + m - 1)
      printf(" ");
  }

  if (!done)
    printf("\n");
  return 0;
}
