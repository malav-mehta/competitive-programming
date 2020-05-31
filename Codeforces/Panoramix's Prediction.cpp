#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int n, m, sieve[51];
    memset(sieve, 0, sizeof(sieve));
    
    sieve[0] = 1;
    sieve[0] = 1;
    
    for (int i = 4; i <= 50; i += 2)
        sieve[i] = 1;
    
    for (int i = 3; i < 50; i += 2)
        if (!sieve[i])
            for (int j = i * i; j <= 50; j += 2 * i)
                sieve[j] = 1;
    
    scanf("%d %d", &n, &m);
    for (int i = n + 1; i <= 50; ++i)
        if (!sieve[i]) {
            if (i == m)
                printf("YES\n");
            else
                printf("NO\n");
            return 0;
        }
    
    printf("NO\n");
    return 0;
}
