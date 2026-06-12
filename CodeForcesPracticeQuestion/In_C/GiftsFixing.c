#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	   int n;
	   scanf("%d",&n);
	   
	   long long candy[n];
	   long long oranges[n];
	   
	   for(int i=0;i<n;i++)
	    scanf("%lld",&candy[i]);
	    
	   for(int i=0;i<n;i++)
	    scanf("%lld",&oranges[i]);
	    
	    long long minCandy=1000000001;
	    long long minOranges=1000000001;
	    
	    for(int i=0;i<n;i++)
	     {
	         if(minCandy>candy[i])
	          {
	              minCandy=candy[i];
	          }
	     }
	     
	     for(int i=0;i<n;i++)
	     {
	         if(minOranges>oranges[i])
	          {
	              minOranges=oranges[i];
	          }
	     }
	     
	     long long count=0;
	     
	     for(int i=0;i<n;i++)
	      {
	         long long dc=candy[i]-minCandy;
             long long dor=oranges[i]-minOranges;

             count+=(dc>dor)?dc:dor;
	      }
	      
	      printf("%lld\n",count);
	}
	
	return 0;
	
}
 
