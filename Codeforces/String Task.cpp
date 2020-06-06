#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(const char p_char) {
    const char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'y'};
    return find(begin(vowels), end(vowels), p_char) != end(vowels);
}

string removeVowels(string st) {
    auto to_erase = std::remove_if(st.begin(), st.end(), isVowel);
    st.erase(to_erase, st.end());
    return st;
}

int main() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s = removeVowels(s);
    
    for (char c : s)
        cout << "." << c;
    return 0;
}
