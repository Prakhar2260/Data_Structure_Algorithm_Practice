#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);

    int remaining=25-X;
    int years=(remaining+3)/4;
    printf("%d\n", years);
    return 0;
}
