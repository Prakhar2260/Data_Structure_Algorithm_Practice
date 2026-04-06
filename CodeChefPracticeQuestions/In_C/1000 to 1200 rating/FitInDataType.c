#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	   int N,X;
	   scanf("%d %d",&N,&X);
	   
	  
	    printf("%d\n",(X%(N+1)));
	    
	}
	
	return 0;

}

