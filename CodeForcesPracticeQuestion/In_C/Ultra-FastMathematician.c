#include <stdio.h>
#include <string.h>

int main()
{
    char a[105], b[105];

    scanf("%s", a);
    scanf("%s", b);

    int n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            printf("0");
        else
            printf("1");
    }

    return 0;
}
