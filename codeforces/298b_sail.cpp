#include <iostream>
using namespace std;

int main() {
  int n, sx, sy, ex, ey, ans(-1);
  string dir;
  cin >> n >> sx >> sy >> ex >> ey >> dir;

  for (int i = 0; i < n; ++i) {
    switch (dir[i]) {
      case 'N':
        if (sy < ey) ++sy;
        break;
      case 'E':
        if (sx < ex) ++sx;
        break;
      case 'W':
        if (sx > ex) --sx;
        break;
      case 'S':
        if (sy > ey) --sy;
        break;
      default:
        break;
    }
    if (sx == ex && sy == ey) {
      ans = i + 1;
      break;
    }
  }

  cout << ans;
  return 0;
}
