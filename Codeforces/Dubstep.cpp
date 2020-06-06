#include <iostream>
#include <string>

using namespace std;

int main() {
    string in;
    cin >> in;
    
    in = " " + in + " ";
    size_t i = 0;
    while (true) {
        i = in.find("WUB");
        if (i == string::npos) break;
        in.replace(i, 3, " ");
        
        while (true) {
            i = in.find("  ");
            if (i != string::npos) in.replace(i, 2, " ");
            else break;
        }
    }
    
    cout << in.substr(1, in.length() - 1);
    return 0;
}
