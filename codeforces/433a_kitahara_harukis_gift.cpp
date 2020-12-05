#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int n, x, g[2] = {0, 0};
  cin >> n;

  if (n == 1) {
    cout << "NO";
    return 0;
  }

  while (n--) {
    cin >> x;
    ++g[x / 100 - 1];
  }

  g[1] %= 2;
  g[0] -= 2 * g[1];
  if (!(g[0] % 2) && g[0] >= 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
