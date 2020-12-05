#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int dd(vector<vector<int> > arr) {
  int n = (int)arr.size();
  int a = 0, b = 0;
  for (int i = 0; i < n; ++i) {
    a += arr[i][i];
    b += arr[n - 1 - i][i];
  }
  printf("%d %d\n", a, b);
  return a > b ? a - b : b - a;
}

int main() {
  int n, tmp;
  scanf("%d", &n);

  vector<vector<int> > arr;
  for (int i = 0; i < n; ++i) {
    vector<int> cur;
    for (int j = 0; j < n; ++j) {
      scanf("%d", &tmp);
      cur.push_back(tmp);
    }
    arr.push_back(cur);
  }

  printf("%d", dd(arr));

  return 0;
}
