#include <cstdio>
using namespace std;

int main() {
  int n, a, b, max = 0, cur = 0;
  scanf("%d", &n);

  while (n--) {
    scanf("%d %d", &a, &b);
    cur -= a;
    cur += b;
    if (cur > max)
      max = cur;
  }

  printf("%d", max);
  return 0;
}
