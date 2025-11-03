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
	  
	  int min,max=0;
	  
	     min=(N+2)/3; 
	     max=(N+1)/2;
	     

	  printf("%d %d\n",max,min);
	}

   return 0;
}

