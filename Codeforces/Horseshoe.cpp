#include <cstdio>
#include <set>
using namespace std;

int main() {
    set<int> nums;
    int tmp, ans = 0;
    
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &tmp);
        if (nums.find(tmp) == nums.end())
            nums.insert(tmp);
        else ++ans;
    }
    
    printf("%d", ans);
    
    return 0;
}
