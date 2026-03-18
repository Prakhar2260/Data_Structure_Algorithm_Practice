# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int k;
        scanf("%d",&k);

        int i;
        for(i=1;k>0;i++)
          {
            int r=i%10;
            if(i%3!=0 && r!=3)
             {
                k--;
             }
          }

          printf("%d\n",i-1);
    }

    return 0;
}
