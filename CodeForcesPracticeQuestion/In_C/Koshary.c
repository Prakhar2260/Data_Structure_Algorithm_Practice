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
	    
	    if(a%2!=0 && b%2 !=0)
	     {
	         printf("NO\n");
	     }
	     
	     else
	     {
	         printf("YES\n");
	     }
	}
	
	return 0;

}

