#include <cstdio>
using namespace std;

int main()
{
  int t, s, h;
  scanf("%d %d %d", &t, &s, &h);
  for (int i = 0; i < t; ++i)
  {
    printf("*");
    for (int j = 0; j < s; ++j)
      printf(" ");
    printf("*");
    for (int j = 0; j < s; ++j)
      printf(" ");
    printf("*\n");
  }

  for (int i = 0; i < 2 * s + 3; ++i)
  {
    printf("*");
  }
  printf("\n");

  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < s + 1; ++j)
      printf(" ");
    printf("*\n");
  }

  return 0;
}