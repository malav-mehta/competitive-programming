#include <iostream>
using namespace std;
#define ll long long

int main() {
  ll n;
  cin >> n;

  if (n == 1) {
    cout << 1;
    return 0;
  }

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return 0;
  }

  if (n % 2) {
    for (ll i = n - 1; i > 0; i -= 2)
      cout << i << " ";

    for (ll i = n; i > 0; i -= 2)
      cout << i << " ";
  }

  else {
    for (ll i = 2; i <= n; i += 2)
      cout << i << " ";

    for (ll i = 1; i <= n; i += 2)
      cout << i << " ";
  }
  return 0;
}
