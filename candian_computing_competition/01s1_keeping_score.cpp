#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 0, c, p, t = 0;
  string s;
  map<char, int> mp;

  mp['2'] = 0;
  mp['3'] = 0;
  mp['4'] = 0;
  mp['5'] = 0;
  mp['6'] = 0;
  mp['7'] = 0;
  mp['8'] = 0;
  mp['9'] = 0;
  mp['T'] = 0;
  mp['J'] = 0;
  mp['Q'] = 2;
  mp['K'] = 3;
  mp['A'] = 4;

  cin >> s;
  cout << "Cards Dealt Points\nClubs ";

  if (s[i] == 'C') {
    ++i;
    c = 0, p = 0;

    while (mp.find(s[i]) != mp.end()) {
      cout << s[i] << " ";
      p += mp[s[i]];
      ++c, ++i;
    }

    if (c == 0)
      p = 3;
    else if (c == 1)
      p += 2;
    else if (c == 2)
      p += 1;

    t += p;
    cout << p << "\n";
  }

  cout << "Diamonds ";

  if (s[i] == 'D') {
    ++i;
    c = 0, p = 0;

    while (mp.find(s[i]) != mp.end()) {
      cout << s[i] << " ";
      p += mp[s[i]];
      ++c, ++i;
    }

    if (c == 0)
      p = 3;
    else if (c == 1)
      p += 2;
    else if (c == 2)
      p += 1;

    t += p;
    cout << p << "\n";
  }

  cout << "Hearts ";

  if (s[i] == 'H') {
    ++i;
    c = 0, p = 0;

    while (mp.find(s[i]) != mp.end()) {
      cout << s[i] << " ";
      p += mp[s[i]];
      ++c, ++i;
    }

    if (c == 0)
      p = 3;
    else if (c == 1)
      p += 2;
    else if (c == 2)
      p += 1;

    t += p;
    cout << p << "\n";
  }

  cout << "Spades ";

  if (s[i] == 'S') {
    ++i;
    c = 0, p = 0;

    while (mp.find(s[i]) != mp.end()) {
      cout << s[i] << " ";
      p += mp[s[i]];
      ++c, ++i;
    }

    if (c == 0)
      p = 3;
    else if (c == 1)
      p += 2;
    else if (c == 2)
      p += 1;

    t += p;
    cout << p << "\n";
  }

  cout << "Total " << t;
  return 0;
}