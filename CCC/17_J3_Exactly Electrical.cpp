g#include <iostream>
using namespace std;

int abs(int a) {
    return a >= 0 ? a : -a;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int sx, sy, ex, ey, charge;
    cin >> sx >> sy >> ex >> ey >> charge;
    int dist = abs(sx - ex) + abs(sy - ey);
    
    if (charge < dist)
        cout << 'N';
    else if ((charge % 2 == 0 && dist % 2 == 0) || (charge % 2 != 0 && dist % 2 != 0))
        cout << 'Y';
    else
        cout << 'N';
    return 0;
}
