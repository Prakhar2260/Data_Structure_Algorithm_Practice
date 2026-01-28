#include <stdio.h>

int main()
{
    long long s[4];
    for (int i = 0; i < 4; i++)
        scanf("%lld", &s[i]);

    int distinct = 0;

    for (int i = 0; i < 4; i++)
    {
        int isNew = 1;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                isNew = 0;
                break;
            }
        }
        if (isNew)
            distinct++;
    }

    printf("%d\n", 4 - distinct);
    return 0;
}
