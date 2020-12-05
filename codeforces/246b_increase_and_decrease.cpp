#include <cstdio>

int main() {
  long long int n, a, sum(0);

  scanf("%lld", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &a);
    sum += a;
  }

  printf("%lld", (sum % n ? n - 1 : n));
  return 0;
}
