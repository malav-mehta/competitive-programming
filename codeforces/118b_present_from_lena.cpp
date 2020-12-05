#include <cstdio>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i <= n; ++i) {
    if (i != n)
      printf("%*c0", 2 * (n - i), ' ');
    else
      printf("0");
    for (int j = 1; j <= i; ++j)
      printf(" %d", j);
    for (int j = i - 1; j >= 0; --j)
      printf(" %d", j);
    printf("\n");
  }
  for (int i = n - 1; i >= 0; --i) {
    printf("%*c0", 2 * (n - i), (i == n ? '\0' : ' '));
    for (int j = 1; j <= i; ++j)
      printf(" %d", j);
    for (int j = i - 1; j >= 0; --j)
      printf(" %d", j);
    printf("\n");
  }
  return 0;
}
