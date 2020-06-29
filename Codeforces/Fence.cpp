#include <cstdio>

const int mxN = 150000;
int min, ans(1), tmp(0), n, k, h[mxN];

int main() {
    scanf("%d %d", &n, &k);
    
    for (int i = 0; i < n; ++i)
        scanf(" %d", &h[i]);
    
    for (int i = 0; i < k; ++i)
        tmp += h[i];
    min = tmp;
    
    for (int i = k; i < n; ++i) {
        tmp += h[i];
        tmp -= h[i - k];
        if (tmp < min) {
            ans = i - k + 2;
            min = tmp;
        }
    }
    
    printf("%d", ans);
    return 0;
}
