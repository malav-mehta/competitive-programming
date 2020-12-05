#include <cstdio>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  if (n % 2) {
    printf("-1\n");
    return 0;
  }

  for (int i = 2; i <= n; i += 2)
    printf("%d %d ", i, i - 1);

  return 0;
}
