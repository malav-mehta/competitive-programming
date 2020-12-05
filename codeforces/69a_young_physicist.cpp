#include <cstdio>
using namespace std;

int main() {
  int n, tmp;
  int body[3] = {0, 0, 0};
  scanf("%d", &n);

  while (n--) {
    for (int i = 0; i < 3; ++i) {
      scanf("%d", &tmp);
      body[i] += tmp;
    }
  }

  for (int i : body) {
    if (i) {
      printf("NO\n");
      return 0;
    }
  }

  printf("YES\n");
  return 0;
}
