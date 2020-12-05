#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  string a;
  bool f(0);
  cin >> a;

  for (int i = 0; i < a.length() - 1; ++i) {
    if (!f && a[i] == '0')
      f = 1;
    else
      cout << a[i];
  }

  if (f) cout << a[a.length() - 1];
  return 0;
}
