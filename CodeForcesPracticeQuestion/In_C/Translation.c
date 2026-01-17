# include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    char strr[101];

    scanf("%s", str);
    scanf("%s", strr);

    int len1 = strlen(str);
    int len2 = strlen(strr);

    if (len1 != len2) {
        printf("NO\n");
        return 0;
    }
    int c=1;

    for(int i=0;i<len1;i++)
    {
        if(str[i]!=strr[len1-i-1])
        {
            c=0;
            break;
        }
    }

    if(c)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
