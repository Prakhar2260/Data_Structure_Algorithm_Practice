#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) 
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
            
        int ar[n];
            
        for(int i = 0; i < n; i++)
            scanf("%d", &ar[i]);
            
        qsort(ar, n, sizeof(int), cmp);
            
        int ok=1;
            
        for(int i=1;i<n;i++)
        {
            if(ar[i]==ar[i-1])
            {
                ok=0;
                break;
            }
        }
              
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
