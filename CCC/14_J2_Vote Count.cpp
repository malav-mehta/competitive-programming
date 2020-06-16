#include <iostream>
using namespace std;

int main() {
    int n, votes(0);
    char c;
    cin >> n;
    
    while (n--) {
        cin >> c;
        votes += (c == 'A' ? 1 : -1);
    }
    
    if (votes > 0) printf("A");
    else if (votes == 0) printf("Tie");
    else printf("B");
    return 0;
}
