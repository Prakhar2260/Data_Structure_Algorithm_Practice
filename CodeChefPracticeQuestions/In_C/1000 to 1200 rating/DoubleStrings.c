#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{ 
	  long long N;
	  scanf("%lld",&N);
	  
	  
	  if(N%2==0)
	  printf("%lld\n",N);
	  
	  else
	  printf("%lld\n",N-1);
	}  
	
	return 0;

}

