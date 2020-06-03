#include <cstdio>
#include <climits>
using namespace std;

int abs(int a) { return a < 0 ? -a : a; }

int main() {
    int n, mnN = INT_MAX, mnI = 0, mnJ = 0;
    scanf("%d", &n);
    
    int h[n];
    for (int i = 0; i < n; ++i) scanf("%d", &h[i]);
    
    for (int i = 1; i < n - 1; ++i)
        for (int j = -1; j < 2; j += 2)
            if (abs(h[i] - h[i+j]) < mnN) {
                mnN = abs(h[i] - h[i + j]);
                mnI = i;
                mnJ = j + i;
            }
    
    if (abs(h[0] - h[n-1]) < mnN) {
        mnI = 0;
        mnJ = n-1;
    }
    
    printf("%d %d", mnI + 1, mnJ + 1);
    return 0;
}
