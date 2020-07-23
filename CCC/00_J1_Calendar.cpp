#include <iostream>
#include <iomanip>
namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, x;
    bool done(0);
    
    cin >> n >> m;
    cout << "Sun Mon Tue Wed Thr Fri Sat\n";
    
    for (int i = 0; i < n - 1; ++i)
        cout << "    ";
    
    for (int i = n; i < n + m; ++i) {
        x = i - n + 1;
        cout << setw(3) << x;
        if (i % 7 == 0) {
            cout << "\n";
            done = i == n + m - 1;
        }
        
        else if (i != n + m - 1)
            cout << " ";
    }
    
    if (!done) cout << "\n";
    return 0;
}
