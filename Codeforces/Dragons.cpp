#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
    int s, n;
    map<int, vector<int> > mp;
    scanf("%d %d", &s, &n);
    
    for (int i = 0; i < n; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (mp.find(a) == mp.end()) {
            vector<int> tmp;
            tmp.push_back(b);
            mp.insert(make_pair(a, tmp));
        }
        
        else
            mp[a].push_back(b);
    }
    
    for (auto it : mp)
        sort(it.second.rbegin(), it.second.rend());

    for (auto it : mp) {
        int x = it.first;
        for (int i = 0; i < it.second.size(); ++i) {
            int y = it.second[i];
            if (s > x)
                s += y;
            else {
                printf("NO\n");
                return 0;
            }
        }
    }
    
    printf("YES\n");
    return 0;
}
