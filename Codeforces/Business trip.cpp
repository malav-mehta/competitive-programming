#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k, ans = 0, cur = 0;
    vector<int> a(12);
    
    scanf("%d", &k);
    for (int i = 0; i < 12; ++i)
        scanf("%d", &a[i]);
    
    sort(a.rbegin(), a.rend());
    while (cur < k) {
        if (ans > 11) {
            printf("-1");
            return 0;
        }
        cur += a[ans++];
    }
    
    printf("%d", ans);
    return 0;
}
