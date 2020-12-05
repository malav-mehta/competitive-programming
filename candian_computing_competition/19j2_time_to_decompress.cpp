#include <iostream>
using namespace std;

int main() {
  cin.sync_with_stdio(0);
  cin.tie();

  int n, x;
  char c;
  cin >> n;

  while (n--) {
    cin >> x >> c;
    while (x--)
      cout << c;
    cout << "\n";
  }

  return 0;
}
