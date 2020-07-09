#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, a[26];
    string s;

    memset(a, 0, sizeof a);
    cin >> n >> s;

    for (int c : s) {
        if ('A' <= c && c <= 'Z') a[c - 'A'] = 1;
        if ('a' <= c && c <= 'z') a[c - 'a'] = 1;
    }

    for (int n : a) {
        if (!n) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}