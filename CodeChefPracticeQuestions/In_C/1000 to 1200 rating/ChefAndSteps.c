#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N,K;
	  scanf("%d %d",&N,&K);
	  
	  int array[N];
	  for(int i=0;i<N;i++)
	    scanf("%d",&array[i]);
	    
	 
	    
	  for(int i=0;i<N;i++)
	   {
	     if(array[i]%K==0)
	      {
	         printf("1");
	      }
	      
	      else
	         printf("0");
	   }
	   
	   printf("\n");
	   
	}
	
	return 0;

}

