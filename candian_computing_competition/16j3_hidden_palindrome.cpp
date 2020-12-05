#include <iostream>
#include <string>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  string s, a, b;
  cin >> s;

  int l = (int)s.length();
  int mxLen = 1;

  for (int i = 2; i <= l; ++i)
    for (int j = 0; j <= l - i; ++j) {
      a = s.substr(j, i);
      b.clear();

      for (int k = i - 1; k >= 0; --k)
        b += a[k];

      if (a == b) {
        mxLen = i;
        break;
      }
    }

  cout << mxLen;
  return 0;
}
