#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool canPlaceFlowers(vector<int>& fb, int n) {
    if (!n) return true;
    if (fb.empty()) return false;
    if (fb.size() == 1 && (n > 1 || fb[0] == 1)) return false;
    if (fb.size() == 1 && n == 1 && fb[0] == 0) return true;

    int c = 0, x = fb.size() - 1;
    if (!fb[0] && !fb[1] && ++c) fb[0] = 1;
    if (!fb[x] && !fb[x - 1] && ++c) fb[x] = 1;

    for (int i = 1; i < x; ++i)
      if (!fb[i - 1] && !fb[i] && !fb[i + 1] && ++c)
        fb[i] = 1;

    for (int y : fb) cout << y << " ";
    return c >= n;
  }
};