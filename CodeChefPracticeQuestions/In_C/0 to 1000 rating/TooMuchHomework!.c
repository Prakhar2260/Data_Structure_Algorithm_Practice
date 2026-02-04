#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X + 10 * Y >= 100)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
