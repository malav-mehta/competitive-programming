#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, l, s;
    string bin;
    cin >> n;
    
    while (n--) {
        cin >> x;
        
        if (x == 0) {
            cout << "0000\n";
            continue;
        }
        
        l = (int) log2(x) + 1;
        s = l % 4;
        
        if (s != 0)
            for (int i = 0; i < 4 - s; ++i)
                cout << '0';
        
        for (int i = l - 1; i >= 0; --i) {
            cout << ((x & (1 << i)) ? '1' : '0');
            ++s;
            if (s % 4 == 0 && i != 0) cout << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}
