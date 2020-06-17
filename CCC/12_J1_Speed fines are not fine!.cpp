#include <cstdio>

int main() {
    int l, s, d;
    scanf("%d %d", &l, &s);
    d = s - l;
    
    if (d <= 0)
        printf("Congratulations, you are within the speed limit!");
    
    else if (d <= 20)
        printf("You are speeding and your fine is $100.");
    
    else if (d <= 30)
        printf("You are speeding and your fine is $270.");
    
    else printf("You are speeding and your fine is $500.");
    return 0;
}
