#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int A,B;
	  scanf("%d %d",&A,&B);
	  
	  int a=0,b=0;
	  for(int i=1;i!=0;i++)
	    {
	     if(i%2!=0)
	      {
	        A=A-i;  
	      }
	      
	      else
	       {
	         B=B-i;    
	       }
	       
	       if(A<0)
	       {
	        b=1;   
	        break;
	       }
	       
	       if(B<0)
	        {
	         a=1;
	         break;
	        }
	    } 
	    
	    if(a==1)
	     {
	       printf("LIMAK\n");  
	     }
	     
	     if(b==1)
	     {
	        printf("BOB\n"); 
	     }
	    
	    
	    
	}
	
	return 0;

}

