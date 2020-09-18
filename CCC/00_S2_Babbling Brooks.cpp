#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  cin.sync_with_stdio(0);
  cin.tie(NULL);

  int n, x, i;
  vector<double> s;
  cin >> n;

  for (i = 0; i < n; ++i)
  {
    cin >> x;
    s.push_back(x);
  }

  while ((cin >> i), i != 77)
  {
    if (i == 99)
    {
      int a, b;
      cin >> a >> b;
      a -= 1;
      s.insert(s.begin() + a + 1, s[a] * (100 - b) / 100.0);
      s[a] *= b / 100.0;
    }

    else if (i == 88)
    {
      int a;
      cin >> a;
      a -= 1;
      s[a] += s[a + 1];
      s.erase(s.begin() + a + 1);
    }
  }

  for (i = 0; i < s.size(); i++)
    cout << (int)round(s[i]) << " ";

  return 0;
}