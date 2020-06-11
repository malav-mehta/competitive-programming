#include <iostream>
#include <set>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    set<string> cyc;
    string t, s;
    cin >> t >> s;
    
    int lnT = (int) t.length();
    int lnS = (int) s.length();
    
    for (int i = 0; i < lnS; ++i)
        cyc.insert(s.substr(i) + s.substr(0, i));
    
    for (int i = 0; i <= lnT - lnS; ++i)
        if (cyc.find(t.substr(i, lnS)) != cyc.end()) {
            cout << "yes";
            return 0;
        }
    
    cout << "no";
    return 0;
}
