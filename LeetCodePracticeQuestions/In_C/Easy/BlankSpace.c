#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int maxLen=0, current=0;

        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);

            if(x==0)
            {
                current++;
                if(current>maxLen)
                    maxLen=current;
            }
            else
            {
                current=0;
            }
        }

        printf("%d\n", maxLen);
    }

    return 0;
}
