#include <bits/stdc++.h>
using namespace std;

int substr_cnt(string str, string sub) {
  int cnt(0);
  size_t pos = str.find(sub, 0);

  while (pos != string::npos) {
    ++cnt;
    pos = str.find(sub, pos + sub.length());
  }

  return cnt;
}

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  string s;
  getline(cin, s);

  int happy(substr_cnt(s, ":-)"));
  int sad(substr_cnt(s, ":-("));

  if (happy == 0 && sad == 0)
    printf("none");
  else if (happy == sad)
    printf("unsure");
  else if (happy > sad)
    printf("happy");
  else
    printf("sad");

  return 0;
}
