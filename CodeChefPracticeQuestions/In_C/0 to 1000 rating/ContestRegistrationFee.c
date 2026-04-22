#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (Y <= X) {
        printf("0\n");
    } else {
        printf("100\n");
    }

    return 0;
}
