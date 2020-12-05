#include <cstdio>
using namespace std;

int main() {
  int mod[4], d, ans = 0;
  for (int i = 0; i < 4; ++i) scanf("%d", &mod[i]);
  scanf("%d", &d);

  for (int i = 1; i <= d; ++i)
    for (int m : mod)
      if (i % m == 0) {
        ++ans;
        break;
      }

  printf("%d", ans);
  return 0;
}
