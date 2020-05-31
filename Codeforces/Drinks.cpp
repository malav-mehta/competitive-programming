#include <cstdio>
using namespace std;

int main() {
    int n, tmp, sum = 0;
    scanf("%d", &n);
    int tot = n * 100;
    
    while (n--) {
        scanf("%d", &tmp);
        sum += tmp;
    }
    
    printf("%lf", sum * 100.0 / tot);
    return 0;
}
