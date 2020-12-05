#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
  int n, m, tmp, mxN = INT_MIN, mxI = 0;
  scanf("%d %d", &n, &m);

  for (int i = 1; i <= n; ++i) {
    scanf("%d", &tmp);
    tmp = ceil((double)tmp / m);
    if (tmp >= mxN) {
      mxN = tmp;
      mxI = i;
    }
  }

  printf("%d", mxI);
  return 0;
}
