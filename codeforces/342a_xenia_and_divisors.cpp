#include <cstring>
#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int n, x, s[8];
  memset(s, 0, sizeof(s));
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x;
    ++s[x];
  }

  if (!s[5] && !s[7] && s[2] >= s[4] && s[1] == s[2] + s[3] && s[1] == s[4] + s[6]) {
    while (s[4]--) {
      --s[2];
      cout << "1 2 4\n";
    }

    while (s[2]--)
      cout << "1 2 6\n";

    while (s[3]--)
      cout << "1 3 6\n";
  }

  else
    cout << -1;

  return 0;
}
