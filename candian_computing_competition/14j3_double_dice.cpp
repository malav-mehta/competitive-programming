#include <cstdio>
using namespace std;

int main() {
  int n, a(100), b(100), r1, r2;
  scanf("%d", &n);

  while (n--) {
    scanf("%d %d", &r1, &r2);
    if (r1 == r2) continue;
    if (r1 < r2)
      a -= r2;
    else
      b -= r1;
  }

  printf("%d\n%d", a, b);
  return 0;
}
