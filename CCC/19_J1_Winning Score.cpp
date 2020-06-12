#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int a(0);
    int b(0);
    
    for (int i = 3; i >= 1; --i) {
        int tmp;
        cin >> tmp;
        a += tmp * i;
    }
    
    for (int i = 3; i >= 1; --i) {
        int tmp;
        cin >> tmp;
        b += tmp * i;
    }
    
    if (a > b) cout << "A";
    else if (a == b) cout << "T";
    else cout << "B";
    
    return 0;
}
