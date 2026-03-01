#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int N;
	   scanf("%d",&N);
	   
	   for(int i=N;i>=1;i--)
	     {
	        printf("%d ",i); 
	     }
	     
	     printf("\n");
	    
	}
	
	return 0;

}

