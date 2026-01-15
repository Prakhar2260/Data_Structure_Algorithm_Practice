# include <stdio.h>

int IsLucky(int a)
 {
    if(a==0)
      return 0;

    while(a>0)
     {
        int rem=a%10;

        if(rem!=4 && rem!=7)
          {
            return 0;
          }

          a=a/10;
      }
      
      return 1;
 }

int main()
{
    long long n;
    scanf("%lld",&n);

    long long num=n;

    int c=0;
    while(num>0)
     {
        int rem=num%10;
        
        if(rem==4 || rem==7)
         {
            c++;
         }

          num=num/10;
     }

     if(IsLucky(c))
      {
        printf("YES\n");
      }

      else
         {
          printf("NO\n");
         }

    return 0;
}
