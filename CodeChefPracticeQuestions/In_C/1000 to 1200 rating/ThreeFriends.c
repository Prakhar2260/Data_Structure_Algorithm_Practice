#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int X,Y,Z;
	  scanf("%d %d %d",&X,&Y,&Z);
	  
	  if(X+Y-Z==0)
	    printf("yes\n");
	    
	  else if(Y+Z-X==0)
	    printf("yes\n");
	    
	  else if(Z+X-Y==0)
	    printf("yes\n");
	    
	  else if(X-Y-Z==0)
	    printf("yes\n");
	    
	  else if(Y-X-Z==0)
	    printf("yes\n");
	    
	  else if(Z-X-Y==0)
	    printf("yes\n");
	    
	  else 
	    printf("no\n");  
	}
	
	return 0;

}

