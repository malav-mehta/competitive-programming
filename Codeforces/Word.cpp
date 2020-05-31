#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string in;
    cin >> in;
    int n = (int) in.length(), m = 0;
    
    for (char c : in)
        if (c < 97)
            m += 1;
    
    if (m > n / 2) {
        transform(in.begin(), in.end(), in.begin(), ::toupper);
        cout << in;
    }
    
    else {
        transform(in.begin(), in.end(), in.begin(), ::tolower);
        cout << in;
    }
    return 0;
}
