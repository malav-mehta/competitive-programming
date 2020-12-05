#include <bits/stdc++.h>
using namespace std;

int m, n, room[1000][1000];
unordered_map<long long int, vector<pair<int, int>>> adj;
unordered_set<int> v;
queue<pair<int, int>> q;

int main() {
  cin.sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n;
  for (int i = 0; i < m; ++i)
    for (int j = 0; j < n; ++j) {
      adj[(i + 1) * (j + 1)].push_back(make_pair(i, j));
      cin >> room[i][j];
    }

  q.push({0, 0});
  while (!q.empty()) {
    pair<int, int> u = q.front();
    long long val = room[u.first][u.second];
    q.pop();

    if (u.first == m - 1 && u.second == n - 1) {
      cout << "yes";
      return 0;
    }

    if (v.find(val) == v.end()) {
      v.insert(val);

      if (adj.find(val) != adj.end())
        for (pair<int, int> v : adj[val]) {
          q.push(v);
        }
    }
  }

  cout << "no";
  return 0;
}