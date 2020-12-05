#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> a, vector<int> b) {
	for (int i = 0; i < 26; ++i)
		if (a[i] != b[i])
			return false;

	return true;
}

string n, h;
vector<int> nc(26), hc(26);
unordered_set<string> v;
int len = 0, lenh, p = 0;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> h;
	len = n.size();
	lenh = h.size();

	for (char c : n) ++nc[c - 'a'];
	for (int i = 0; i < len; ++i) ++hc[h[i] - 'a'];
	if (comp(nc, hc)) v.insert(h.substr(0, len));

	for (int i = len; i < lenh; ++i) {
		--hc[h[p] - 'a'];
		++p;

		++hc[h[i] - 'a'];
		if (comp(nc, hc)) {
			string cur = h.substr(p, len);
			if (v.find(cur) == v.end()) v.insert(cur);
		}
	}

	cout << v.size();
	return 0;
}