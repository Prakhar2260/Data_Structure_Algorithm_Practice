#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    char str[N+1];
	    scanf("%s",str);
	    
	    int allzero=1;
	    int allone=1;
	    
	    for(int i=0;i<N;i++)
	    { 
	      if(str[i]!='1')
	        allone=0;
	    }     
	    
	    for(int i=0;i<N;i++)
	    { 
	      if(str[i]!='0')
	        allzero=0;
	    }     
	    
	    
	    if(allzero)
	     {
	         printf("%d\n",N);
	     }
	     
	     else if(allone)
	     {
	         printf("%d\n",N);
	     }
	     
	     else
	      printf("1\n");
	}
	
	return 0;

}

