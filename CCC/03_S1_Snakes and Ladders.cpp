#include <cstdio>
using namespace std;

int main()
{
  int m, p = 1;
  while ((scanf("%d", &m)), (m != 0))
  {
    if (p + m <= 100)
    {
      p += m;
      switch (p)
      {
      case 9:
        p = 34;
        break;
      case 40:
        p = 64;
        break;
      case 67:
        p = 86;
        break;
      case 54:
        p = 19;
        break;
      case 90:
        p = 48;
        break;
      case 99:
        p = 77;
        break;
      }
      printf("You are now on square %d\n", p);
      if (p == 100)
      {
        printf("You Win!");
        return 0;
      }
    }
  }

  printf("You Quit!");

  return 0;
}