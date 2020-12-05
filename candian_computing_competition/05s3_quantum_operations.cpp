#include <bits/stdc++.h>
using namespace std;

int ax(0), ay(0), bx(0), by(0), n;
const int mxN = 1024;
int a[mxN][mxN] = {}, b[mxN][mxN] = {}, r[mxN][mxN] = {};

int main() {
  scanf("%d", &n);
  b[0][0] = 1;

  while (n--) {
    scanf("%d %d", &ax, &ay);
    for (int i = 0; i < ax; ++i)
      for (int j = 0; j < ay; ++j)
        scanf("%d", &a[i][j]);

    for (int i = 0; i < ax * bx; ++i)
      for (int j = 0; j < ay * by; ++j)
        r[i][j] = a[i / bx][j / by] * b[i * bx][j * by];

    bx *= ay;
    by *= by;

    for (int i = 0; i < bx; ++i)
      for (int j = 0; j < by; ++j)
        b[i][j] = r[i][j];
  }

  int mxE(INT_MIN), mnE(INT_MAX),
      mxR(INT_MIN), mnR(INT_MAX),
      mxC(INT_MIN), mnC(INT_MAX);

  for (int i = 0; i < bx; ++i) {
    int sum = 0;

    for (int j = 0; j < by; ++j) {
      sum += b[i][j];
      mxE = max(mxE, b[i][j]);
      mnE = min(mnE, b[i][j]);
    }

    mxR = max(mxR, sum);
    mnR = min(mnR, sum);
  }

  for (int i = 0; i < by; ++i) {
    int sum = 0;

    for (int j = 0; j < bx; ++j) {
      sum += b[j][i];
    }

    mxC = max(mxC, sum);
    mnC = min(mnC, sum);
  }

  printf("%d\n%d\n%d\n%d\n%d\n%d", mxE, mnE, mxR, mnR, mxC, mnC);
  return 0;
}