#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, tmp, ans = 0;
    vector<int> a;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    for (int i = 0; i < m; ++i) {
        if (a[i] >= 0) break;
        else ans -= a[i];
    }
    
    printf("%d", ans);
    return 0;
}
