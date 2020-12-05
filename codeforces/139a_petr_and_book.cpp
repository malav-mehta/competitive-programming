#include <cstdio>
using namespace std;

int main() {
  int n, days[7];
  scanf("%d", &n);
  for (int i = 0; i < 7; ++i) scanf("%d", &days[i]);

  int i = -1;
  while (n > 0) {
    i = (i + 1) % 7;
    n -= days[i];
  }

  printf("%d", i + 1);
  return 0;
}
