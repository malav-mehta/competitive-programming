#include <iostream>
using namespace std;

int main() {
    int n, t;
    string q, tmp;
    cin >> n >> t;
    cin >> q;
    tmp = q;
    
    while (t--) {
for (int i = 0; i < n - 1; ++i) {
            if (q[i] == 'B' && q[i + 1] == 'G') {
                tmp[i] = 'G';
                tmp[i + 1] = 'B';
            }
        }
        
        q = tmp;
    }
    
    cout << q;
    return 0;
}
