#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int wins(0);
    char c;
    
    for (int i = 0; i < 6; ++i) {
        cin >> c;
        if (c == 'W') ++wins;
    }

    if (wins == 5 || wins == 6) cout << 1;
    else if (wins == 3 || wins == 4) cout << 2;
    else if (wins == 1 || wins == 2) cout << 3;
    else cout << -1;
    
    return 0;
}
