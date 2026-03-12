# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
      int n;
      scanf("%d",&n);

      int array[n];

      for(int i=0;i<n;i++)
       {
        scanf("%d",&array[i]);
       }

       int sum=0;

       for(int i=0;i<n;i++)
        {
         sum+=array[i];
        }

        if(sum%2==0)
            {
            printf("YES\n");
            }
    
            else
            {
                printf("NO\n");
            }
    }
    return 0;
}
