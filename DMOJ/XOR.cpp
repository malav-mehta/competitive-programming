#include <iostream>
using namespace std;

long long f(long long x) {
  switch (x % 4) {
    case 0:
      return x;
      break;
    case 1:
      return 1;
      break;
    case 2:
      return x + 1;
      break;
    default:
      return 0;
      break;
  }
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  long long n, a, b;
  cin >> n;

  while (n--) {
    cin >> a >> b;
    cout << (f(b) ^ f(a - 1)) << "\n";
  }
  return 0;
}