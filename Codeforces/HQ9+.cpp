#include <iostream>
using namespace std;

int main () {
    string in;
    cin >> in;
    
    for (char c : in)
        if (c == 'H' || c == 'Q' || c == '9' || c == '+') {
            printf("YES\n");
            return 0;
        }
    
    printf("NO\n");
    return 0;
}
