#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,a;
	    scanf("%d %d",&n,&a);
	    
	    long long sq=sqrt(n);
	   
	    printf("%lld\n",sq*a);
	}
	
	return 0;

}

