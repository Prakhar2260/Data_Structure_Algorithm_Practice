#include <stdio.h>
#include <math.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  int array[N];
	  
	  for(int i=0;i<N;i++)
	    {
	        scanf("%d",&array[i]);
	    }
	    
	  int mul=0;
	  
	  for(int i=0;i<N;i++)
	   {
	     if(array[i]==2)
	      mul++;
	   }
	   
	   
	   int c=0;
	  
	   if(mul%8==0)
	     c=1;
	   
	   if(c)
	    {
	       printf("YES\n"); 
	    }
	    
	    else
	      printf("NO\n");
	}
	
	return 0;

}

