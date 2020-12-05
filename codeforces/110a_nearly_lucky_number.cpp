#include <iostream>
#include <string>
using namespace std;

bool isLucky(string s) {
  for (char c : s)
    if (c != '4' && c != '7')
      return false;
  return true;
}

int main() {
  int cnt = 0;
  string in;
  cin >> in;

  for (char c : in)
    if (c == '4' || c == '7')
      ++cnt;

  if (isLucky(to_string(cnt)))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
