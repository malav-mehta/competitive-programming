#include <cstdio>

bool check(int time) {
    if (time > 1000) {
        int a(time / 1000), b(time % 1000 / 100), c(time % 100 / 10), d(time % 10);
        return a - b == b - c && b - c == c - d;
    }
    else {
        int a(time / 100), b(time % 100 / 10), c(time % 10);
        return a - b == b - c;
    }
}

void increment(int& time) {
    ++time;
    if (time % 100 >= 60)
        time += 40;
    
    if (time / 100 > 12)
        time -= 1200;
}

int main() {
    int time(1200), d, ans(0);
    scanf("%d", &d);
    
    for (int i = 0; i < d % 720; ++i) {
        increment(time);
        if (check(time)) ++ans;
    }
    
    ans += 31 * (d / 720);
    printf("%d", ans);
    return 0;
}
