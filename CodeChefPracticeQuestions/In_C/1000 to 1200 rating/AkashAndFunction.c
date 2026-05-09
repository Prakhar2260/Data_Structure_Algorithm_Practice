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
	    
	    long long odd=(N+1)/2;
	    
	    printf("%lld\n",odd);
	}
	
	return 0;

}

