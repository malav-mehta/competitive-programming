#include <iostream>
using namespace std;

int main() {
    int i = 0;
    string code, out;
    cin >> code;
    
    while (i < code.length()) {
        if (code[i] == '.') {
            out += '0';
        }
        else if (i != code.length() - 1) {
            if (code[i] == '-' && code[i + 1] == '.') {
                out += '1';
                ++i;
            }
            
            else if (code[i] == code[i + 1] && code[i] == '-') {
                out += '2';
                ++i;
            }
        }
        ++i;
    }
    
    cout << out;
    
    return 0;
}
