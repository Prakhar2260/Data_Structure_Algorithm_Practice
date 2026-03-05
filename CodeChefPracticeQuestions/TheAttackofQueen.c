#include <stdio.h>
# include <math.h>

int min(int a,int b)
 {
     return a>b ? b : a ;
 }


int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int N,X,Y;
	   scanf("%d %d %d",&N,&X,&Y);
	   
	   int pos=N-1+N-1;
	  
	   pos=pos+min(X-1,N-Y)+min(N-X,N-Y)+min(N-X,Y-1)+min(X-1,Y-1);
	   
	     
	    printf("%d\n",pos); 
	}
	
	return 0;

}

