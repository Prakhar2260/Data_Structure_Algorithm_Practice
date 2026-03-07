#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);

    char str[]="codeforces";
    while(t--)
    {
        char c;
        scanf(" %c",&c);

        int found = 0;

        for(int i=0;i<10;i++)
        {
            if(str[i]==c)
            {
                found = 1;
                break;
            }
        }

        if(found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
