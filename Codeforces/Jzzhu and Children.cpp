#include <cstdio>
#include <queue>
using namespace std;

int main() {
    int n, m, tmp;
    scanf("%d %d", &n, &m);
    queue<int> line;
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        line.push(tmp);
    }
    
    while (!line.empty()) {
        tmp = line.front();
        line.pop();
        
    }
    
    return 0;
}
