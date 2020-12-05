#include <cmath>
#include <cstdio>
using namespace std;

int main() {
  int c;
  while ((scanf("%d", &c)), (c != 0)) {
    int x = sqrt(c);
    do
      if (c % x == 0)
        break;
    while (x-- > 0);
    printf("Minimum perimeter is %d with dimensions %d x %d\n", 2 * x + 2 * (c / x), x, c / x);
  }
  return 0;
}