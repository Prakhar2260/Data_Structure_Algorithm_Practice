#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[105];
    scanf("%s",s);

    char curr='a';
    int ans=0;

    for(int i=0;i<strlen(s);i++)
    {
        int diff=abs(s[i]-curr);

        ans+=diff<(26-diff)?diff:(26-diff);

        curr = s[i];
    }

    printf("%d\n", ans);

    return 0;
}
