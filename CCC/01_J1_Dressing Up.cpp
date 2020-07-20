#include <cstdio>

int main() {
    int h;
    scanf("%d", &h);

    for (int i = 1; i < h - 1; i += 2) {
        for (int j = 0; j < i; ++j) printf("*");
        for (int j = 0; j < (h - i) * 2; ++j) printf(" ");
        for (int j = 0; j < i; ++j) printf("*");
        printf("\n");
    }

    for (int i = 0; i < h * 2; ++i)
        printf("*");

    printf("\n");

    for (int i = 1; i < h - 1; i += 2) {
        for (int j = 0; j < h - 1 - i; ++j) printf("*");
        for (int j = 0; j < (i + 1) * 2; ++j) printf(" ");
        for (int j = 0; j < h - 1 - i; ++j) printf("*");
        printf("\n");
    }

    return 0;
}

