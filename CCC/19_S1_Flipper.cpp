#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int grid[2][2] = {{1, 2}, {3, 4}};
    
    for (int i = 0; i < (int) s.length(); ++i) {
        if (s[i] == 'V') {
            swap(grid[0][0], grid[0][1]);
            swap(grid[1][0], grid[1][1]);
        }
        else {
            swap(grid[0][0], grid[1][0]);
            swap(grid[0][1], grid[1][1]);
        }
    }
    
    cout << grid[0][0] << " " << grid[0][1] << "\n";
    cout << grid[1][0] << " " << grid[1][1] << "\n";
    return 0;
}
