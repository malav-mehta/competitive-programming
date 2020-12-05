#include <iostream>
#include <string>
using namespace std;

int main() {
  char d, c;
  string s = "qwertyuiopasdfghjkl;zxcvbnm,./'";
  cin >> d;

  while (cin >> c) {
    cout << s[s.find(c) - (d == 'R') + (d == 'L')];
  }
  return 0;
}