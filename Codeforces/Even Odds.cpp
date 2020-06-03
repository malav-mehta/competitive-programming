#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    
    vector<int> nums;
    nums.push_back(0);
    
    for (int i = 1; i <= n; i += 2)
        nums.push_back(i);
    
    for (int i = 2; i <= n; i += 2)
        nums.push_back(i);
    
    printf("%d", nums[k]);
    return 0;
}
