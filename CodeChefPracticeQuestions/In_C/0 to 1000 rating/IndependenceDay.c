#include <stdio.h>

int main() 
{
    int X;
    scanf("%d", &X);

    if (X < 15)
        printf("%d", 15 - X);
    else if (X == 15)
        printf("0");
    else
        printf("-1");

    return 0;
}
