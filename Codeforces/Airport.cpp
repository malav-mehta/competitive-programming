#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, res, min = 0, max = 0;
    scanf("%d %d", &n, &m);
    
    vector<int> a(m);
    for (int i = 0; i < m; ++i)
        scanf("%d", &a[i]);
  
    sort(a.begin(), a.end());
    res = n;
    for (int i = 0; i < m; ++i) {
        if (a[i] < res) {
            res -= a[i];
            min += a[i] * (a[i] + 1) / 2;
        }
        
        else {
            min += a[i] * (a[i] + 1) / 2 - (a[i] - res) * (a[i] - res + 1) / 2;
            break;
        }
    }
    
    while (n--) {
        sort(a.rbegin(), a.rend());
        max += a[0]--;
    }
    
    printf("%d %d", max, min);
    return 0;
}
