# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

   while(t--)
   {
      int n;
      scanf("%d",&n);

      char str[n+1];
      scanf("%s",str);

      int p1=0;
      int p2=n-1;

      int ans=n;

      while(p1<p2)
      {
        if( (str[p1]=='1' && str[p2]=='0') || (str[p1]=='0' && str[p2]=='1'))
          {
            p1=p1+1;
            p2=p2-1;
            ans=ans-2;
          }

         else 
          break; 
      }

      printf("%d\n",ans);
   }
    return 0;
}
