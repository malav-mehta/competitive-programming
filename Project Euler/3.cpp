#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int ans = 0;
    long long int n = 600851475143;

    while (n%2==0) {
        ans=2;
        n>>=1;
    }

    for (int i=3; i <= sqrt(n); i+=2) {
        while (n%i == 0){
            ans=i;
            n/=i;
        }
    }

    if (n>2)
        cout << n;
    else
        cout << ans;

    return 0;
}
