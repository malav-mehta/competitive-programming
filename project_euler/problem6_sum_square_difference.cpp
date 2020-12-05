#include <iostream>
using namespace std;

int main() {
  int ans(0), s(0);
  for (int i = 1; i < 101; ++i) {
    ans -= i * i;
    s += i;
  }

  cout << s * s + ans;
  return 0;
}
