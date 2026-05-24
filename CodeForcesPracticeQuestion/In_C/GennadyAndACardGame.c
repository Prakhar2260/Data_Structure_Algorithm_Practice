#include <stdio.h>

int main()
{
    char table[3];
    char card[3];

    scanf("%s",table);

    for(int i=0;i<5;i++)
    {
        scanf("%s",card);

        if(card[0]==table[0] || card[1]==table[1])
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");

    return 0;
}
