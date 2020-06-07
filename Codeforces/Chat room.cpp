#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, f = "hello";
    int j = 0;
    cin >> s;
    
    for (int i = 0; i < s.length(); ++i)
        if (f[j] == s[i])
            if (++j == 5) {
                printf("YES\n");
                return 0;
            }
    
    printf("NO\n");
    return 0;
}
