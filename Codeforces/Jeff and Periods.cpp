#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    ll n, x;
    map<ll, vll> a;
    cin >> n;
    
    for (ll i = 0; i < n; ++i) {
        cin >> x;
        a[x].push_back(i);
    }
    
    vector<pair<ll, ll>> ans;
    for (auto it : a) {
        x = it.first;
        if (a[x].size() == 1)
            ans.push_back(make_pair(x, 0));
        
        else {
            set<ll> s;
            for (ll i = 1; i < a[x].size(); ++i)
                s.insert(abs(a[x][i] - a[x][i-1]));
            
            auto tmp = s.begin();
            if (s.size() == 1)
                ans.push_back(make_pair(x, *tmp));
        }
    }
    
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); ++i)
        cout << ans[i].first << " " << ans[i].second << "\n";
    return 0;
}
