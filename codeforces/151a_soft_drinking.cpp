#include <cstdio>
using namespace std;

int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  int n, j, l, c, d, p, nl, np;
  scanf("%d %d %d %d %d %d %d %d", &n, &j, &l, &c, &d, &p, &nl, &np);
  int mil = j * l / nl;
  int sli = d * c;
  int slt = p / np;
  int ans = min(mil, min(sli, slt)) / n;
  printf("%d", ans);
  return 0;
}
