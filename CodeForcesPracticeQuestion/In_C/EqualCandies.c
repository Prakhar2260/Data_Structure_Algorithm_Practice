#include <stdio.h>

int main() 
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[50];
        int min=10000001;
        long long sum=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]<min)
            {
                min=a[i];
            }
            sum += a[i];
        }

        long long result=sum-(long long)n*min;
        printf("%lld\n", result);
    }

    return 0;
}
