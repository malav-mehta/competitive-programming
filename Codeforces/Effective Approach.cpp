#include <cstdio>
using namespace std;
typedef long long ll;

int pfind(int ar[], int q, int size) {
    int pos = 0;
    for (int i = 0; i < size; ++i) {
        ++pos;
        if (ar[i] == q) break;
    }
    return pos;
}

int vfind(int ar[], int q, int size) {
    int pos = 0;
    for (int i = size - 1; i >= 0; ++i) {
        ++pos;
        if (ar[i] == q) break;
    }
    return pos;
}

int main() {
    int n, m, tmp, p = 0, v = 0;
    scanf("%d", &n);
    int ar[n];
    
    for (int i = 0; i < n; ++i)
        scanf("%d", &ar[i]);
    
    scanf("%d", &m);
    
    while (m--) {
        scanf("%d", &tmp);
        p += pfind(ar, tmp, n);
        v += vfind(ar, tmp, n);
    }
    
    printf("%d %d", p, v);
    return 0;
}
