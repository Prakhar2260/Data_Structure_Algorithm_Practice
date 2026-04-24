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
	    
	    int min,max;
	    
	    if(a>b)
	     {
	        max=a;
	        min=b;
	     }
	     
	     else if(a<b)
	     {
	         max=b;
	         min=a;
	     }
	     
	     else
	     {
	         min=a;
	         max=a;
	     }
	     
	     printf("%d %d\n",min,max);
	}
	
	return 0;

}

