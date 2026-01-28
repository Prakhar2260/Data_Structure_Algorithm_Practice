#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long Y;
        scanf("%lld", &Y);

        if (Y == 0)
            printf("1\n");
        else
            printf("%lld\n", 3 * Y);
    }

    return 0;
}
