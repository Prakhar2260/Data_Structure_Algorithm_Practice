#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int amount = A - B;
    if (amount < 0)
        amount = 0;

    printf("%d\n", amount);

    return 0;
}
