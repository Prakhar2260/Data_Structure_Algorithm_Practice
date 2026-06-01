#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long long a,b,c,d;
	    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	    
	    if(d<b)
        {
            printf("-1\n");
            continue;
        }

        long long diag=d-b;
        long long x=a+diag;

        if(x<c)
        {
            printf("-1\n");
        }
        
        else
        {
            printf("%lld\n", diag + (x - c));
        }
    }

    return 0;
	    
}

