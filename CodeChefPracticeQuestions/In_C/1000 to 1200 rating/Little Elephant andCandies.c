#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    long long c;
	    
	    scanf("%d %lld",&n,&c);
	    
	    int arr[n];
	    int sum=0;
	    for(long long i=0;i<n;i++)
	     {
	         scanf("%d",&arr[i]);
	         
	         sum=sum+arr[i];
	     }
	     
	     if(sum<=c)
	      {
	          printf("Yes\n");
	      }
	      
	      else
	       printf("No\n");
	    
	}
	
	return 0;

}

