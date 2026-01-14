#include <stdio.h>

int main()
{
    long long n;
    int k;
    
    scanf("%lld %d",&n,&k);
    
    while(k--) 
    {
        if(n%10!=0)
            n--;
            
        else
            n=n /10;
    }
    
    printf("%lld\n",n);
    
    return 0;
}
