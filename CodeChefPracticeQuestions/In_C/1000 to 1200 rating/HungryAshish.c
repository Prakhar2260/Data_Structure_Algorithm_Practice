#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T); 
	
	while(T--)
	{
	  int X,Y,Z;
	  scanf("%d %d %d",&X,&Y,&Z);
	  
	  if(X-Y>= 0)
	   printf("PIZZA\n");
	   
	  else if(X-Z >=0)
	   printf("BURGER\n");
	   
	  else
	   printf("NOTHING\n");
	}
	
	return 0;

}

