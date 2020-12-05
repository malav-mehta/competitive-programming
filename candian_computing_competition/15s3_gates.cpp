#include <bits/stdc++.h>
using namespace std;

int g, p, x, r = 0, pl[100000];
unordered_set<int> vis;

int main() {
  scanf("%d\n%d", &g, &p);
  for (int i = 0; i < p; ++i)
    scanf("%d", &pl[i]);
  sort(pl, pl + p);
  for (int i = p - 1; i >= 0; --i) {
    if (vis.find(pl[i]) == vis.end()) {
      vis.insert(pl[i]);
      ++r;
      cout << pl[i] << " ";
    } else if (i != 1 && vis.find(pl[i] - 1) == vis.end()) {
      vis.insert(pl[i] - 1);
      ++r;
      cout << pl[i] - 1 << " ";
    }
  }
  printf("%d", r);
  return 0;
}
