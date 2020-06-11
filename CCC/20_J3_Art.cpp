#include <cstdio>
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main() {
    int minX(101), minY(101), maxX(-1), maxY(-1), n, x, y;
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d,%d", &x, &y);
        minX = min(minX, x);
        minY = min(minY, y);
        maxX = max(maxX, x);
        maxY = max(maxY, y);
    }
    
    printf("%d,%d\n", --minX, --minY);
    printf("%d,%d\n", ++maxX, ++maxY);
    return 0;
}
