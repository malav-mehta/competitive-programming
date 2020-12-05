#include <cstdio>
using namespace std;

int main() {
  int n, tmp, ans = 0;
  scanf("%d", &n);

  int mnN = 101, mnI = 0;
  int mxN = 0, mxI = 0;

  for (int i = 1; i <= n; ++i) {
    scanf("%d", &tmp);
    if (tmp > mxN) {
      mxN = tmp;
      mxI = i;
    }

    if (tmp <= mnN) {
      mnN = tmp;
      mnI = i;
    }
  }

  ans = n - mnI + mxI - 1;

  if (mxI > mnI)
    --ans;

  printf("%d", ans);
  return 0;
}
