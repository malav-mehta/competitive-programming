#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, vector<string> > mp;

    while (n--) {
        string cur;
        getline(cin, cur);
        while (cur != "</HTML>") {
            size_t p = cur.find("<A HREF=");

            while (p != string::npos) {
                link
            }

            getline(cin, cur);
        }
    }

    return 0;
}
