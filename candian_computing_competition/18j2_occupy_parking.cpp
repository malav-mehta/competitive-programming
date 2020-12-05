#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int n, p[100], ans(0);
  char c;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> c;
    if (c == 'C')
      p[i] = 1;
    else
      p[i] = 0;
  }

  for (int i = 0; i < n; ++i) {
    cin >> c;
    if (c == 'C' && p[i]) ++ans;
  }

  cout << ans;
  return 0;
}
