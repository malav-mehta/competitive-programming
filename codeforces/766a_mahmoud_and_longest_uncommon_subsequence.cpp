#include <iostream>
using namespace std;

#define max(a, b) (a > b ? a : b)

int main() {
  string a, b;
  cin >> a >> b;

  if (a == b || a.empty() || b.empty())
    cout << -1;
  else
    cout << max(a.size(), b.size());
  return 0;
}
