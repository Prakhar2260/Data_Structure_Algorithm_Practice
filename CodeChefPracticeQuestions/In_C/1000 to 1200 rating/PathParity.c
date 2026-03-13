#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    long n;
	    int k;
	    scanf("%ld %d",&n,&k);
	    
        if((n%2==1 && k==0))
            printf("NO\n");
            
        else
            printf("YES\n");
	}
	
	return 0;

}

