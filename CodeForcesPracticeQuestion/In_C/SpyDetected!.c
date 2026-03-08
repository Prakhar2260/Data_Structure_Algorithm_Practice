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

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        int majority;

        if(a[0]==a[1] || a[0]==a[2])
            majority=a[0];
        else
            majority=a[1];

        for(int i=0;i<n;i++)
        {
            if(a[i]!=majority)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }

    return 0;
}
