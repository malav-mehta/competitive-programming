#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, m;
  cin >> x >> m;

  for (int i = 0; i < m; ++i)
  {
    double d = (x * i - 1) / (double)m;
    if (d == floor(d))
    {
      cout << i;
      return 0;
    }
  }

  cout << "No such integer exists.";
  return 0;
}