#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p[105], giver[105];

    for (int i = 1; i <= n; i++)
        scanf("%d", &p[i]);

    for (int i = 1; i <= n; i++)
    {
        giver[p[i]] = i;
    }

    for (int i = 1; i <= n; i++)
        printf("%d ", giver[i]);

    return 0;
}
