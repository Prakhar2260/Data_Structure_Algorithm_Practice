#include <stdio.h>
#include <stdlib.h>

int cmpAsc(const void *a, const void *b)
{
    return (*(int*)a-*(int*)b);
}

int cmpDesc(const void *a,const void *b)
{
    return (*(int*)b-*(int*)a);
}

int main() 
{
    int t;
    scanf("%d",&t);

    while(t--) 
    {
        int n,k;
        scanf("%d %d",&n,&k);

        int a[30],b[30];

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);

        qsort(a, n, sizeof(int),cmpAsc);
        qsort(b, n, sizeof(int),cmpDesc);

        for(int i=0;i<k;i++)
        {
            if(a[i]<b[i])
            {
                int temp=a[i];
                a[i]=b[i];
                b[i]=temp;
            }
            else
            {
                break;
            }
        }

        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];

        printf("%d\n",sum);
    }

    return 0;
}
