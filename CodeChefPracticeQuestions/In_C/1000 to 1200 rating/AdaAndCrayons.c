#include <stdio.h>
#include <string.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while (T--) 
    {
        char S[55];
        scanf("%s", S);
        int n = strlen(S);

        int uBlocks=0,dBlocks=0;

        for(int i = 0; i < n; i++)
        {
            if(i==0||S[i]!=S[i - 1])
            {
                if (S[i] == 'U') uBlocks++;
                else dBlocks++;
            }
        }

        
        int ans = (uBlocks < dBlocks) ? uBlocks : dBlocks;
        printf("%d\n", ans);
    }

    return 0;
}
