#include <iostream>
using namespace std;

int main()
{
  int n;
  string w;

  while (cin >> w && w != "quit!")
  {
    n = w.size();
    if (n > 4 && w[n - 1] == 'r' && w[n - 2] == 'o' && !(w[n - 3] == 'a' || w[n - 3] == 'e' || w[n - 3] == 'i' || w[n - 3] == 'o' || w[n - 3] == 'u' || w[n - 3] == 'y'))
    {
      cout << w.substr(0, n - 2) << "our";
    }
    else
    {
      cout << w;
    }

    cout << "\n";
  }

  return 0;
}