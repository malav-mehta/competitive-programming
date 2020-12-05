#include <iostream>
#include <map>
using namespace std;

int main() {
  int n;
  string tmp;
  map<string, int> mp;
  cin >> n;

  while (n--) {
    cin >> tmp;
    if (mp.find(tmp) == mp.end())
      mp.insert(make_pair(tmp, 1));
    else
      ++mp[tmp];
  }

  map<string, int>::iterator it;
  int mxN = 0;
  string winner;

  for (it = mp.begin(); it != mp.end(); ++it) {
    if (it->second > mxN) {
      winner = it->first;
      mxN = it->second;
    }
  }

  cout << winner;
  return 0;
}
