#include <iostream>
#include <set>
using namespace std;

int main() {
    int ans = 0;
    set<char> dc;
    string user;
    cin >> user;
    
    for (char c : user) {
        if (dc.find(c) == dc.end()) {
            dc.insert(c);
            ++ans;
        }
    }
    
    if (ans % 2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}
