#include <cstdio>
using namespace std;

int main() {
    int n, n5 = 0, n0 = 0, tmp;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d", &tmp);
        if (tmp == 5) ++n5;
        else ++n0;
    }
    
    if (!n0) printf("-1");
    else if (n5 < 9) printf("0");
    else {
        for (int i = 0; i < (n5 / 9) * 9; ++i) printf("5");
        for (int i = 0; i < n0; ++i) printf("0");
    }
    
    return 0;
}
