#include <iostream>
using namespace std;
#define ll long long

int main() {
  string s;
  cin >> s;
  char p = s[0];
  ll cur = 0;
  ll max = 1;

  for (char c : s) {
    if (c == p) {
      ++cur;
      max = max > cur ? max : cur;
    }

    else {
      p = c;
      cur = 1;
    }
  }

  cout << (max > cur ? max : cur);
  return 0;
}