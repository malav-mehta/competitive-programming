#include <cstring>
#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  int chr[26];
  memset(chr, 0, sizeof(chr));

  string d1, d2;
  cin >> d1 >> d2;

  for (char c : d1)
    ++chr[c - 'a'];

  for (char c : d2)
    --chr[c - 'a'];

  for (int c : chr)
    if (c != 0) {
      cout << "NO";
      return 0;
    }

  int diff(0);
  for (int i = 0; i < d1.length(); ++i)
    if (d1[i] != d2[i])
      ++diff;

  if (diff > 2)
    cout << "NO";
  else
    cout << "YES";
  return 0;
}
