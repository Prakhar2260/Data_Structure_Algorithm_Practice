#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        int a[105];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        qsort(a,n,sizeof(int),cmp);

        int freq[105],cnt=0;

        for(int i=0;i<n; )
        {
            int j=i;
            while(j<n && a[j]==a[i])
            j++;

            freq[cnt++]=j-i;
            i=j;
        }

        if(cnt==1)
        {
            printf("Yes\n");
        }
        
        else if(cnt==2)
        {
            if(abs(freq[0]-freq[1])<=1)
                printf("Yes\n");
                
            else
                printf("No\n");
        }
        
        else 
        {
            printf("No\n");
        }
    }

    return 0;
}
