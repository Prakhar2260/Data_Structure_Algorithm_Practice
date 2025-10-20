#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	 {
	  int A,B,X;
	  scanf("%d %d %d",&A,&B,&X);
	  
	  int count;
	  if(A*B <= X*X)
	    count=0; 
	  
	   else
	   {
	    if(A>B)
	    {
	    A=1;
	    count=1;
	    }
	    
	    else
	     {
	       B=1;
	       count=1;
	     }
	   }
	   
	   if(A*B > X*X)
	    {
	     count=2;
	    }
	    
	    printf("%d\n",count);
	     
	 }
	

}

