#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long long x,k;
	    scanf("%lld %lld",&x,&k);
	    
	    if(x%k != 0)
        {
         printf("1\n");
         printf("%d\n", x);
        }
        
      else
        {
        printf("2\n");
        printf("%d 1\n", x - 1);
        }
	}
	
	return 0;

}

