#include <cstdio>

const int mxN = 1000001;
int a[mxN];

int main() {
    int n, m, x, s, ans(0);
    char c;
    scanf("%d %d", &n, &m);
    
    for (int i = 1; i <= n; ++i) {
        scanf(" %c", &c);
        a[i] = (c == 'S' ? 0 : (c == 'M' ? 1 : 2));
    }
    
    for (int i = 1; i <= m; ++i) {
        scanf(" %c %d", &c, &x);
        s = (c == 'S' ? 0 : (c == 'M' ? 1 : 2));
        if (1 <= x && x <= n && a[x] >= s) {
            ++ans;
            a[x] = -1;
        }
    }
    
    printf("%d", ans);
    return 0;
}
