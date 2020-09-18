#include <cstdio>
using namespace std;

int main()
{
  int r, c, m, px, py;

  scanf("%d %d", &r, &c);
  char grid[r][c];
  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      scanf("%c", &grid[i][j]);
      while (!(grid[i][j] == '.' || grid[i][j] == 'X'))
        scanf("%c", &grid[i][j]);
    }
  }

  scanf("%d", &m);
  char moves[m];
  for (int i = 0; i < m; ++i)
  {
    scanf("%c", &moves[i]);
    while (!(moves[i] == 'F' || moves[i] == 'R' || moves[i] == 'L'))
      scanf("%c", &moves[i]);
  }

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
    {
      if (grid[i][j] != 'X')
      {
        for (int dg = 0; dg < 4; ++dg)
        {
          int d = dg + 0;
          px = i;
          py = j;
          bool ub = true;
          for (int k = 0; k < m; ++k)
          {
            char n = moves[k];
            if (n == 'F')
            {
              if (d == 0)
                --px;
              else if (d == 1)
                ++py;
              else if (d == 2)
                px++;
              else
                --py;
            }
            else if (n == 'L')
              d = (d + 3) % 4;

            else
              d = (d + 1) % 4;

            if (px >= r || px < 0 || py >= c || py < 0 || grid[px][py] == 'X')
            {
              ub = false;
              break;
            }
          }

          if (ub)
            grid[px][py] = '*';
        }
      }
    }
  }

  for (int i = 0; i < r; ++i)
  {
    for (int j = 0; j < c; ++j)
      printf("%c", grid[i][j]);
    printf("\n");
  }
  return 0;
}