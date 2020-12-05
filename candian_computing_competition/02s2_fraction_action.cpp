#include <iostream>

using namespace std;

int reduce(int a, int b) {
  if (a == 0)
    return b;
  return reduce(b % a, a);
}

int main() {
  int x, y;
  cin >> x >> y;

  if (x == 0) {
    cout << 0;
    return 0;
  }

  if (x >= y) {
    cout << (x - x % y) / y << " ";
    x %= y;
  }

  if (x != 0) {
    int r = reduce(x, y);
    x /= r;
    y /= r;
    cout << x << "/" << y << endl;
  }
  return 0;
}