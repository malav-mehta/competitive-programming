#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char> > x;

    for (int i = 0; i < n; ++i) {
        vector<char> tmp;
        x.push_back(tmp);
        string s;
        cin >> s;

        for (char c : s)
            x[i].push_back(c);
    }

    char p = x[0][0];
    char q = x[0][1];

    if (p == q) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (x[i][i] != p || x[i][n - 1 - i] != p) {
            cout << "NO";
            return 0;
        }

        for (int j = 0; j < n; ++j) {
            if (j != i && j != n - 1 - i && x[i][j] != q) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}