#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        long long n;
        scanf("%lld",&n);

        long long k=n/3;
        int r=n%3;

        long long c1,c2;

        if(r==0) 
        {
            c1=k;
            c2=k;
        }
        
        else if(r==1)
        {
            c1=k+1;
            c2=k;
        } 
        
        else 
        { 
            c1=k;
            c2=k+1;
        }

        printf("%lld %lld\n",c1,c2);
    }

    return 0;
}
