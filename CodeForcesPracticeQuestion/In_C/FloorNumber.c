#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	   int n,k;
	   scanf("%d %d",&n,&k);
	   
	   if(n==1 || n==2)
	    {
	        printf("1\n");
	        continue;
	    }
	    
	   printf("%d\n",(n-3)/k+2);
	}
	    
	
	return 0;

}

