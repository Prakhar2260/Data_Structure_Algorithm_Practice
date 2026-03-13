#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);

        long long a[n];

        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);

        if(k==1)
        {
            int sorted=1;

            for(int i=1;i<n;i++)
            {
                if(a[i]<a[i-1])
                {
                    sorted=0;
                    break;
                }
            }

            if(sorted)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("YES\n");
    }

    return 0;
}
