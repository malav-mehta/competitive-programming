#include <cmath>
#include <cstdio>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int x = sqrt(a * b / c);
  int y = sqrt(a * c / b);
  int z = sqrt(b * c / a);

  printf("%d", 4 * (x + y + z));
  return 0;
}
