#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int tmp;
    for (int i = 1; i <= 5; ++i)
        for (int j = 1; j <= 5; ++j) {
            scanf("%d", &tmp);
            if (tmp) {
                printf("%d", (3-i < 0 ? i-3 : 3-i) + (3-j < 0 ? j-3 : 3-j));
                return 0;
            }
        }
    
    printf("-1");
    return 0;
}
