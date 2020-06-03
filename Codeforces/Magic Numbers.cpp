#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string n;
    cin >> n;
    
    if (n[0] == '4') {
        cout << "NO\n";
        return 0;
    }
    
    for (int i = 0; i < n.length(); ++i) {
        if ((n[i] != '1' && n[i] != '4') || cnt > 2) {
            cout << "NO\n";
            return 0;
        }
        
        if (n[i] == '4') ++cnt;
        else cnt = 0;
    }
    
    cout << "YES\n";
    return 0;
}
