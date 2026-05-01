#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int s1,s2,s3,s4;
        scanf("%d %d %d %d",&s1,&s2,&s3,&s4);

        int winner1=(s1>s2)?s1:s2;
        int winner2=(s3>s4)?s3:s4;

        int loser1=(s1<s2)?s1:s2;
        int loser2=(s3<s4)?s3:s4;

        int maxLoser=(loser1>loser2)?loser1:loser2;
        int minWinner=(winner1<winner2)?winner1:winner2;

        if(maxLoser<minWinner)
            printf("YES\n");
            
        else
            printf("NO\n");
    }

    return 0;
}
