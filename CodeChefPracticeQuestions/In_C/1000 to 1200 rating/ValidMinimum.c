#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	  int x,y,z;
	  scanf("%d %d %d",&x,&y,&z);
	  
	   if(x>y)
	   { 
	       int t=x;
	       x=y; 
	       y=t;
	   }
	   
        if(y>z)
        {
            int t=y;
            y=z;
            z=t;
        }
        
         if(x>y)
        {
            int t=x;
            x=y; 
            y=t;
        }

        if(x==y)
            printf("YES\n");
            
        else
            printf("NO\n");
    }
	
	
	return 0;
}

