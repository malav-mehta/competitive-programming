#include <bits/stdc++.h>
using namespace std;

unordered_map<char, vector<char> > gen_adj(vector<string> &edges) {
  unordered_map<char, vector<char> > adj;

  for (string e : edges) {
    adj[e[0]].push_back(e[1]);
    adj[e[1]].push_back(e[0]);
  }

  return adj;
}

bool bfs(unordered_map<char, vector<char> > adj) {
  queue<char> q;
  vector<int> v(26);
  q.push('A');

  while (!q.empty()) {
    char c = q.front();
    q.pop();
    v[c - 'A'] = 1;

    for (char u : adj[c])
      if (v[u - 'A'] == 0)
        q.push(u);
  }

  return !v[1];
}

int main() {
  int n = 0;
  string in;
  vector<string> roads;
  while ((cin >> in) && in != "**") roads.push_back(in);

  for (int i = 0; i < roads.size(); ++i) {
    vector<string> r = roads;
    r.erase(r.begin() + i);
    unordered_map<char, vector<char> > adj = gen_adj(r);
    if (bfs(adj)) {
      ++n;
      cout << roads[i] << "\n";
    }
  }

  cout << "There are " << n << " disconnecting roads.\n";
  return 0;
}