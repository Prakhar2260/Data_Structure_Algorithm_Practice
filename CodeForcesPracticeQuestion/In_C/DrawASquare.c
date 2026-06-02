#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int l,r,d,u;
	    scanf("%d %d %d %d",&l,&r,&d,&u);
	    
	   
	   if(l==r && r==d && d==u)
	    {
	        printf("YES\n");
	    }
	    
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	
	return 0;

}

