#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    cin >> s;
    char p = s[0];
    
    for (char c : s) {
        if (c == p) ++cnt;
        else {
            p = c;
            cnt = 1;
        }
        if (cnt >= 7) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
