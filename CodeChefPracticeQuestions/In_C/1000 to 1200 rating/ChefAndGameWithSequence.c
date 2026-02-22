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
	  
	  int even=0,odd=0;
	  
	  for(int i=0;i<N;i++)
	   {
	     if(array[i]%2==0)
	       even++;
	       
	      else
	      odd++;
	   }
	   
	   
	   while(odd>=2)
	    {
	       odd=odd-2;
	       even++;
	       N--;
	    }
	    
	    while(even>=2)
	     {
	         even--;
	         N--;
	     }
	     
	     printf("%d\n",N);
	   
	}
	
	return 0;
	
	

}

