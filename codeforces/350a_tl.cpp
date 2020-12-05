#include <algorithm>
#include <cstdio>
using namespace std;

int n, m;
int a[100], b[100];

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; ++i)
    scanf(" %d", &a[i]);
  for (int i = 0; i < m; ++i)
    scanf(" %d", &b[i]);

  sort(a, a + n);
  sort(b, b + m);

  if (a[n - 1] > b[0]) {
    printf("-1");
    return 0;
  }

  for (int i = a[n - 1]; i < b[0]; ++i) {
    if (2 * a[0] <= i) {
      printf("%d", i);
      return 0;
    }
  }

  printf("-1");
  return 0;
}
