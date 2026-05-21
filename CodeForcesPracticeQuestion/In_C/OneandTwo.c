#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[n];
        int totaltwos=0;

        for (int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

            if(a[i]==2)
                totaltwos++;
        }

        
        if(totaltwos% 2!=0)
        {
            printf("-1\n");
            continue;
        }

        if(totaltwos==0)
        {
            printf("1\n");
            continue;
        }

        int count=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
                count++;

            if(count==totaltwos/2)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }

    return 0;
}
