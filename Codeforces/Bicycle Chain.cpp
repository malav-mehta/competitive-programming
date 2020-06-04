#include <cstdio>
#include <climits>
#include <map>
using namespace std;

int main() {
    int n;
    int m;
    map<int, int> ratios;
    
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; ++i) scanf("%d", &b[i]);
    
    double tmp, mxN = INT_MIN;
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            tmp = (double) b[j] / a[i];
            if ((int) tmp == tmp) {
                if (tmp >= mxN) {
                    mxN = (int) tmp;
                    if (ratios.find(tmp) == ratios.end())
                        ratios.insert(make_pair(mxN, 1));
                    else ++ratios[mxN];
                }
            }
        }
    
    printf("%d", ratios[mxN]);    
    return 0;
}
