#include <cstdio>
using namespace std;

int main() {
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  printf("%d", (n - a <= b ? n - a : b + 1));
  return 0;
}
