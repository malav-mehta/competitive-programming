#include <cstdio>
using namespace std;

int main() {
    int n, tmp, ans = 0;
    int mxN = -1, mnN = 10001;
    scanf("%d", &n);
    
    if (n == 1) {
        printf("0");
        return 0;
    }
    
    scanf("%d", &tmp);
    mxN = tmp;
    mnN = tmp;
    
    while (n--) {
        scanf("%d", &tmp);
        if (tmp > mxN) {
            mxN = tmp;
            ++ans;
        }
        
        if (tmp < mnN) {
            mnN = tmp;
            ++ans;
        }
    }
    
    printf("%d\n", ans);
    return 0;
}
