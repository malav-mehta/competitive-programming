#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;
    int cnt(1);

    for (int i = 1; i < (int)s.length(); ++i) {
      if (s[i] == s[i - 1])
        ++cnt;
      else {
        cout << cnt << " " << s[i - 1] << " ";
        cnt = 1;
      }
    }

    cout << cnt << " " << s[s.length() - 1] << " ";
    cout << "\n";
  }
  return 0;
}
