#include <cstdio>
using namespace std;

int main() {
  int n, ans = 0, sum, tmp;
  scanf("%d", &n);

  while (n--) {
    sum = 0;
    for (int i = 0; i < 3; ++i) {
      scanf("%d", &tmp);
      sum += tmp;
    }

    if (sum > 1) ++ans;
  }

  printf("%d", ans);
  return 0;
}
