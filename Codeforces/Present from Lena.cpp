#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        printf("%*c0", n - i, ' ');
        for (int j = 1; j <= i; ++j)
            printf(" %d", j);
        for (int j = i - 1; j >= 0; --j)
        printf(" %d", j);
    }
    return 0;
}
