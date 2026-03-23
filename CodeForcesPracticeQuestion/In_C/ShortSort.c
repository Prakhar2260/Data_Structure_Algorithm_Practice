# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
      char str[4];
      scanf("%s",str);

      int c=3;
      if(str[0]=='a')
       {
         c--;
       }

       if(str[1]=='b')
       {
         c--;
       }

       if(str[2]=='c')
       {
         c--;
       }

       if(c<=2)
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
