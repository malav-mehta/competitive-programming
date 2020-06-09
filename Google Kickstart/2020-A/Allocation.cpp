#include <cstdio>
#include <algorithm>
using namespace std;

int a[100000];

int main() {
    int t, n, b;
    scanf("%d", &t);
    
    for (int x = 1; x <= t; ++x) {
        int ans(0);
        scanf("%d %d", &n, &b);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        
        sort(a, a + n);
        
        for (int i = 0; i < n; ++i) {
            b -= a[i];
            if (b >= 0) ++ans;
            else break;
        }
        printf("Case #%d: %d\n", x, ans);
    }

    return 0;
}
