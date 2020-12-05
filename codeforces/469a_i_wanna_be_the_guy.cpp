#include <iostream>
using namespace std;

const int mxN = 101;
int g[mxN] = {};

int main() {
  int n;
  cin >> n;

  int p;
  cin >> p;
  while (p--) {
    int t;
    cin >> t;
    g[t] = 1;
  }

  int a;
  cin >> a;
  while (a--) {
    int t;
    cin >> t;
    g[t] = 1;
  }

  for (int i = 1; i <= n; ++i)
    if (g[i] == 0) {
      cout << "Oh, my keyboard!";
      return 0;
    }

  cout << "I become the guy.";
  return 0;
}