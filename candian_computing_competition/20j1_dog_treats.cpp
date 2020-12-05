#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int s, m, l;
  cin >> s >> m >> l;
  cout << (s + 2 * m + 3 * l >= 10 ? "happy" : "sad");

  return 0;
}
