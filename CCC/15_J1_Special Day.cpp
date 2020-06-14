#include <cstdio>

int main() {
    int m, d;
    scanf("%d %d", &m, &d);
    
    if (m == 2 && d == 18) printf("Special");
    else if (m < 2 || (m == 2 && d < 18)) printf("Before");
    else printf("After");
    
    return 0;
}
