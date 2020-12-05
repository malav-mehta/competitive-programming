#include <bits/stdc++.h>
using namespace std;

unordered_map<long long int, vector<pair<int, int>>> adj;
unordered_set<int> vis;
queue<pair<int, int>> q;

bool can_escape(int M, int N, std::vector<std::vector<int>> v) {
  for (int i = 0; i < M; ++i)
    for (int j = 0; j < N; ++j)
      adj[(i + 1) * (j + 1)].push_back(make_pair(i, j));

  q.push({0, 0});
  while (!q.empty()) {
    pair<int, int> u = q.front();
    long long val = v[u.first][u.second];
    q.pop();

    if (u.first == M - 1 && u.second == N - 1) return true;
    if (vis.find(val) == vis.end()) {
      vis.insert(val);

      if (adj.find(val) != adj.end())
        for (pair<int, int> node : adj[val])
          q.push(node);
    }
  }
  return false;
}