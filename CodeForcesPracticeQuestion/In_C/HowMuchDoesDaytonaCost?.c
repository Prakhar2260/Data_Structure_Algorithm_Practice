# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        
        int array[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }

        int c=0;

        for(int i=0;i<n;i++)
        {
            if(array[i]==k)
            {
                c=1;
                break;
            }
        }

        if(c) 
        printf("YES\n");

        else
        printf("NO\n");

    }

    return 0;
}
