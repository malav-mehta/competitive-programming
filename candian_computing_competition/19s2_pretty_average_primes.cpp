#include <iostream>
#include <vector>
using namespace std;

const int MAX = 2000001;
vector<bool> sieve(MAX, true);
vector<int> primes;

void start() {
  sieve[0] = sieve[1] = false;
  primes.push_back(2);
  for (int i = 4; i < MAX; i += 2)
    sieve[i] = false;

  for (int i = 3; i * i < MAX; ++i)
    if (sieve[i]) {
      primes.push_back(i);
      for (int j = i * i; j < MAX; j += i)
        sieve[j] = false;
    }
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);
  start();

  int T, n;
  cin >> T;

  while (T--) {
    cin >> n;
    n += n;
    for (int x : primes)
      if (sieve[n - x]) {
        cout << x << " " << n - x << "\n";
        break;
      }
  }
  return 0;
}
