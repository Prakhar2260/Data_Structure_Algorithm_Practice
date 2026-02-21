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
	    
	    int P[N];
	    for(int i=0;i<N;i++)
	      scanf("%d",&P[i]);
	     
	         int index1=0,indexN=0;
	         
	       for(int i=0;i<N;i++)
	         {
	           if(P[i]==1)
	            {
	              index1=i;     
	            }
	            
	            if(P[i]==N)
	             {
	                indexN=i; 
	             }
	         }
	       
	           int operations=index1+(N-1-indexN);
        
               if(index1>indexN)
               operations--;
            
	     printf("%d\n",operations);
	}
	
	return 0;
	

}

