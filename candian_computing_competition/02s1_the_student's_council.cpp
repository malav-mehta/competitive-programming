#include <cstdio>
using namespace std;

int main() {
  int pink, green, red, orange, target, ans = 0, min = 2147483647;
  scanf("%d %d %d %d %d", &pink, &green, &red, &orange, &target);

  for (int p = 0; p < (int)(target / pink) + 1; ++p)
    for (int g = 0; g < (int)(target / green) + 1; ++g)
      for (int r = 0; r < (int)(target / red) + 1; ++r)
        for (int o = 0; o < (int)(target / orange) + 1; ++o)
          if (p * pink + g * green + r * red + o * orange == target) {
            ++ans;
            min = min <= p + g + r + o ? min : p + g + r + o;
            printf("# of PINK is %d # of GREEN is %d # of RED is %d # of ORANGE is %d\n", p, g, r, o);
          }

  printf("Total combinations is %d.\n", ans);
  printf("Minimum number of tickets to print is %d.\n", min);
  return 0;
}
