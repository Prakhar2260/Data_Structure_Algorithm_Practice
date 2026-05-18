#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int s[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }

        qsort(s,n,sizeof(int),compare);

        int minDiff=1000000;

        for(int i=1;i<n;i++)
        {
            int diff=s[i]-s[i-1];
            if(diff<minDiff)
            {
                minDiff=diff;
            }
        }

        printf("%d\n", minDiff);
    }

    return 0;
}
