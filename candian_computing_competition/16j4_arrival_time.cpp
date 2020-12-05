#include <cstdio>
using namespace std;

int main() {
  int h, m;
  double d(0);
  scanf("%d:%d", &h, &m);

  while (d < 120) {
    if ((7 <= h && h < 10) || (15 <= h && h < 19))
      d += 0.5;
    else
      ++d;

    ++m;
    if (m == 60) {
      m = 0;
      ++h;
    }

    if (h == 24)
      h = 0;
  }

  if (h < 10) printf("0");
  printf("%d:", h);

  if (m < 10) printf("0");
  printf("%d\n", m);
  return 0;
}
