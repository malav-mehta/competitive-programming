#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n < 3) {
    cout << 0;
    return 0;
  }

  vector<int> a;
  while (n--) {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  sort(a.begin(), a.end());

  int ans(0);
  int min = a[0], max = a[a.size() - 1];
  for (int i = a.size() - 2; i; --i) {
    if (a[i] != min && a[i] != max) ++ans;
  }

  cout << ans;
  return 0;
}