#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    long long a,b,c;
	    scanf("%lld %lld %lld",&a,&b,&c);
	    
	         int t=c%2;
	        
	          if(t==1)
	           {
	               if(a+1>b)
	                printf("First\n");
	                
	                else
	                printf("Second\n");
	           }
	          
	           else
	           {
	               if(a>b)
	                printf("First\n");
	                
	                else
	                printf("Second\n");
	           }
	     
	}
	
	return 0;

}
 
