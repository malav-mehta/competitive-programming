#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

double max(double a, double b) {
  return a > b ? a : b;
}

int abs(int a) {
  return a >= 0 ? a : -a;
}

int main() {
  vector<pair<int, int> > obs;
  int n, t, x;
  double ans(-1);
  scanf("%d", &n);

  while (n--) {
    scanf("%d %d", &t, &x);
    obs.push_back(make_pair(t, x));
  }

  sort(obs.begin(), obs.end());
  for (int i = 1; i < (int)obs.size(); ++i) {
    double d = abs(obs[i].second - obs[i - 1].second);
    double t = obs[i].first - obs[i - 1].first;
    ans = max(ans, d / t);
  }

  printf("%f\n", ans);
  return 0;
}
