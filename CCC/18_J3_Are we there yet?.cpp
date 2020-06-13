#include <iostream>
#include <vector>
using namespace std;

int abs(int a) {
    return a >= 0 ? a : -a;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> cities;
    cities.push_back(0);
    
    for (int i = 1; i <= 4; ++i) {
        cin >> cities[i];
        cities[i] += cities[i - 1];
    }
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)
            cout << abs(cities[j] - cities[i]) << " ";
        cout << "\n";
    }
    
    return 0;
}
