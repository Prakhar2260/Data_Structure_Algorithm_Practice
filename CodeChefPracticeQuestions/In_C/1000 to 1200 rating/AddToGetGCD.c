#include <stdio.h>

int ismultiple(int x,int y)
  {
    
    while(y!=0)
      {
       int temp=y;
       y=x%y;
       x=temp;
      }
      
     return x; 
      
  }

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	 {
	   int X,Y;
	   scanf("%d %d",&X,&Y);
	   
	   if(ismultiple(X,Y)>1)
	     {
	       printf("%d\n",0);  
	     }
	     
	   else if(ismultiple(X,Y+1)>1 || ismultiple(X+1,Y)>1)
	     {
	      printf("%d\n",1);      
	     }
	     
	   else 
	    {
	     printf("%d\n",2);     
	    }
	     
	 }
	 
	 return 0;

}

