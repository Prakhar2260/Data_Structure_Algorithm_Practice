#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    
	    char s[105];
	    scanf("%s",s);
	    
	    int zero=0,nonzero=0;
	    
	    for(int i=0; s[i]!='\0' ;i++)
	     {
	       if(s[i]=='0')
	       zero++;
	       
	       else
	       nonzero++;
	       
	       if((zero>=11 || nonzero>=11) && abs(zero-nonzero>=2))
	        break;
	       
	     }
	     
	     if(zero>nonzero)
	      printf("LOSE\n");
	      
	     else
	      printf("WIN\n");
	}
	
	return 0;

}

