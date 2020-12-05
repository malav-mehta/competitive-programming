#include <iostream>
using namespace std;

int main() {
  int n, m, tmp = 0;
  cin >> n >> m;
  char c;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> c;
      if (c == '-')
        cout << '-';
      else
        cout << (tmp ? 'W' : 'B');

      if (j != m - 1 || m % 2)
        tmp = (tmp + 1) % 2;
    }
    cout << "\n";
  }
  return 0;
}
