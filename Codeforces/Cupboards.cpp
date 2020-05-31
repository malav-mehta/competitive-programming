#include <cstdio>
#include <cstring>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, a, b, l[2], r[2];
    scanf("%d", &n);
    
    memset(l, 0, sizeof(l));
    memset(r, 0, sizeof(r));
    
    while (n--) {
        scanf("%d %d", &a, &b);
        ++l[a];
        ++r[b];
    }
    
    printf("%d", min(l[0], l[1]) + min(r[0], r[1]));
    return 0;
}
