#include <stdio.h>

int main() 
{
    int R, B, P, Q;
    scanf("%d %d %d %d", &R, &B, &P, &Q);

    int redCoins = R * P;
    int blueCoins = B * Q;

    if (redCoins > blueCoins)
        printf("%d\n", redCoins);
    else
        printf("%d\n", blueCoins);

    return 0;
}
