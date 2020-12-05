#include <cstdio>
using namespace std;

int main() {
  int n, mnN = 1000000001, mnI = 1, tmp;
  scanf("%d", &n);
  bool rep = false;

  for (int i = 1; i <= n; ++i) {
    scanf("%d", &tmp);
    if (tmp < mnN) {
      rep = false;
      mnN = tmp;
      mnI = i;
    }

    else if (tmp == mnN)
      rep = true;
  }

  if (rep)
    printf("Still Rozdil");
  else
    printf("%d", mnI);
  return 0;
}
