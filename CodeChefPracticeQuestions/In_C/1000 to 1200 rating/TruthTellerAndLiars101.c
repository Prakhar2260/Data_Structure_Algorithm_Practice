#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    
	    if(n<=m)
	    {
	        printf("-1\n");
	        continue;
	    }
	    
	    printf("%d\n",m+m+1);
	    
	}
	
	return 0;

}

