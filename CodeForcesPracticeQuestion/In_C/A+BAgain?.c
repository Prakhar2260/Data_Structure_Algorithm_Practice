# include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        int num;
        scanf("%d",&num);
        
        int sum=0;
        
        while(num>0)
         {
             int rem=num%10;
             sum =sum + rem;
             num=num/10;
         }
         
         printf("%d\n",sum);
    }
    return 0;
}
