#include <iostream>
using namespace std;

int main() {
    string in;
    cin >> in;
    in[0] = in[0] >= 97 ? toupper(in[0]) : in[0];
    cout << in;
    return 0;
}
