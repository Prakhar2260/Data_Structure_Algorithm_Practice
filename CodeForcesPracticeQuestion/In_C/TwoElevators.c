#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    long long a,b,c;
	    scanf("%lld %lld %lld",&a,&b,&c);
	    
	    long long timeTaken1st=a-1;
	    
	    long long currentPosition;
	    long long timeTaken2nd;
	    
	    if(b>c)
	    {
	        timeTaken2nd=b-c;
	        currentPosition=c;
	    } 
	    
	    else
	    {
	        timeTaken2nd=c-b;
	        currentPosition=c;
	    } 
	    
	    timeTaken2nd+=currentPosition-1;
	    
	    if(timeTaken2nd==timeTaken1st)
	     {
	         printf("3\n");
	     }
	     
	     else if(timeTaken1st>timeTaken2nd)
	      {
	          printf("2\n");
	      }
	      
	      else
	      {
	          printf("1\n");
	      }
	}
	
	return 0;

}

