#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }

        int a[2*n];
        int m=0;

        a[m++]=b[0];

        for(int i=1;i<n;i++)
        {
            if(b[i]>=b[i-1])
            {
                a[m++]=b[i];
            } 
            
            else
            {
                a[m++]=1;
                a[m++]=b[i];
            }
        }

        printf("%d\n",m);
        for (int i=0; i<m;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }

    return 0;
}
