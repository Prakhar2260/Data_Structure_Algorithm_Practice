#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[15];
        scanf("%s", s);

        int n = strlen(s);

        int same = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[0])
            {
                same = 0;
                break;
            }
        }

        if (same)
        {
            printf("NO\n");
            continue;
        }

        char r[15];
        strcpy(r, s);

        qsort(r, n, sizeof(char), cmp);

        if (strcmp(r, s) == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                char temp = r[i];
                r[i] = r[n - 1 - i];
                r[n - 1 - i] = temp;
            }
        }

        printf("YES\n%s\n", r);
    }

    return 0;
}
