#include <iostream>
#include <vector>

using namespace std;
const int mxN = 501;
vector<int> primes(mxN, 1);

void sieve() {
    primes[0] = 0;
    primes[1] = 0;
    
    for (int i = 4; i < mxN; i += 2)
        primes[i] = 0;
    
    for (int i = 3; i < mxN; i += 2)
        if (primes[i])
            for (int p = i + i; p < mxN; p += i)
                primes[p] = 0;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    sieve();
    int n, x, y;
    cin >> n;
    
    while (n--) {
        int ans(0);
        cin >> x >> y;
        
        for (int i = x; i < y; ++i)
            ans += primes[i];
        
        cout << ans << "\n";
    }
    
    return 0;
}
