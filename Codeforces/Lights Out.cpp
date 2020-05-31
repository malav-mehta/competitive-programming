#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int grid[5][5];
    int tmp;
    memset(grid, 0, sizeof(grid));
    
    for (int i = 1; i <= 3; ++i)
        for (int j = 1; j <= 3; ++j) {
            scanf("%d", &tmp);
            if (tmp % 2) {
                grid[i-1][j] = !grid[i-1][j];
                grid[i+1][j] = !grid[i+1][j];
                grid[i][j] = !grid[i][j];
                grid[i][j-1] = !grid[i][j-1];
                grid[i][j+1] = !grid[i][j+1];
            }
        }
    
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j)
            printf("%d", !grid[i][j] ? 1 : 0);
        printf("\n");
    }
    return 0;
}
