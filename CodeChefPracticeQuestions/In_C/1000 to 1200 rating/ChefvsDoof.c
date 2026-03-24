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
	  
	  int array[N];
	  for(int i=0;i<N;i++)
	     scanf("%d",&array[i]);
	     
	   
	  int flag=1;
	  
	   for(int i=0;i<N;i++)
	    {
	      if(array[i]%2==0)
	       {
	           flag=0;
	           break;
	       }
	    }      
	    
	          if(flag)
	          {
	            printf("YES\n");
	          }
	          
	          else
	            printf("NO\n");
	    
	}
	
	return 0;

}

