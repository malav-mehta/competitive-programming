#include <iostream>
using namespace std;
typedef long long ll;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  ll n, a(0), b(0), x;
  cin >> n;

  while (n--) {
    cin >> x;
    a += x;
    b ^= x;
  }

  cout << a - b << "\n";
  return 0;
}