#include <stdio.h>
#include <string.h>

int main()
{
    char guest[105],host[105],pile[205];
    int freq[26]={0};

    scanf("%s",guest);
    scanf("%s",host);
    scanf("%s",pile);

    for(int i=0;i<strlen(guest);i++)
    {
        freq[guest[i]-'A']++;
    }

    for(int i=0;i<strlen(host);i++)
    {
        freq[host[i]-'A']++;
    }

    for(int i=0;i<strlen(pile); i++)
    {
        freq[pile[i]-'A']--;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
