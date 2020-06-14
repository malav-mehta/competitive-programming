#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, x;
    vector<int> tides;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        tides.push_back(x);
    }
    
    sort(tides.begin(), tides.end());
    int lo((n - 1) / 2), hi(lo + 1);
    
    for (int i = 0; i < n; ++i) {
        if (i) printf(" ");
        if (i % 2) printf("%d", tides[hi++]);
        else printf("%d", tides[lo--]);
    }
    
    return 0;
}
