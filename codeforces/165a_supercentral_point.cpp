#include <cstdio>
#include <vector>

using namespace std;
struct Point {
  int x, y;
};

int main() {
  int n, ans = 0;
  scanf("%d", &n);

  vector<Point> points(n);
  for (int i = 0; i < n; ++i) scanf("%d %d", &points[i].x, &points[i].y);

  for (int i = 0; i < n; ++i) {
    bool right = false, left = false;
    bool lower = false, upper = false;

    for (int j = 0; j < n; ++j) {
      if (j != i) {
        if (points[j].x > points[i].x && points[j].y == points[i].y) right = true;
        if (points[j].x < points[i].x && points[j].y == points[i].y) left = true;
        if (points[j].x == points[i].x && points[j].y < points[i].y) lower = true;
        if (points[j].x == points[i].x && points[j].y > points[i].y) upper = true;
      }
    }

    if (right && left && lower && upper) ++ans;
  }

  printf("%d", ans);
  return 0;
}
