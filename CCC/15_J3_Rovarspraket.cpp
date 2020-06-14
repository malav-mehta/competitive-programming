#include <iostream>
#include <vector>
using namespace std;

int abs(int a) {
    return a >= 0 ? a : -a;
}

char vowel(char c) {
    char v, vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int mnC = 27, mnI = 0;
    
    for (int i = 0; i < 5; ++i) {
        if (abs(vowels[i] - c) < mnC) {
            mnC = abs(vowels[i] - c);
            mnI = i;
        }
    }
    
    v = vowels[mnI];
    return v;
}

char consonant(char c) {
    for (char i = c; i <= 'z'; ++i)
        if (i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u')
            return i;
    return 'z';
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    string s, ans;
    cin >> s;
    
    for (char c : s)
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            ans += c + vowel(c) + consonant(c);
    
    cout << ans;
    return 0;
}
