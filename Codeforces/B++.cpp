#include <iostream>
using namespace std;

int main() {
    string in;
    int n, x = 0;
    cin >> n;
    
    while(n--) {
        cin >> in;
        if (in.find("++") != string::npos) ++x;
        if (in.find("--") != string::npos) --x;
    }
    
    cout << x;
    return 0;
}
