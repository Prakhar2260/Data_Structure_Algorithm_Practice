# include <stdio.h>

int main()
{
   int T;
   scanf("%d",&T);
   
   while(T--)
   {
      long long a,b;
        scanf("%lld %lld",&a,&b);

        long long diff=llabs(a-b);

        long long ans=(diff+9)/10;

        printf("%lld\n",ans);
   }     

   return 0;
}
