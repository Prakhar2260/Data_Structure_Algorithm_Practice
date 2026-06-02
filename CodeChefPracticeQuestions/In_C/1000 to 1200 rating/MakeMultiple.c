#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    
	    int diff=b-a;
	    
	    if(diff==0 || diff>=a)
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

