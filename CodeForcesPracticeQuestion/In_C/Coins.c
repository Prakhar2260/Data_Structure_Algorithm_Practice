#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long long n,k;
	    scanf("%lld %lld",&n,&k);
	    
	  
	       if(k%2==1)
	        {
            printf("YES\n");
            }
           
           
          else
          {
            if(n%2 == 0)
                printf("YES\n");
                
            else
                printf("NO\n");
          }
	}
	
	return 0;

}

