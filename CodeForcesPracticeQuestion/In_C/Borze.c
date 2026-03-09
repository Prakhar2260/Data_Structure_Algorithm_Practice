#include <stdio.h>
#include <string.h>

int main()
{
    char s[205];
    scanf("%s", s);

    int i = 0;
    int n = strlen(s);

    while (i < n)
    {
        if (s[i] == '.')
        {
            printf("0");
            i++;
        }
        else
        {
            if (s[i+1] == '.')
                printf("1");
            else
                printf("2");
            
            i += 2;
        }
    }

    return 0;
}
