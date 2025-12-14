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
	  
	  char S[N+1];
	  scanf("%s",&S);
	  
	  int time=0;
	  
	  for(int i=0;i<N;i++)
	   {
	     if(S[i]==S[i+1])
	      {
	        time=time+1;  
	        i++;  
	      }
	      
	      else
	      {
	        time=time+1;  
	      }
	   }
	 
	 printf("%d\n",time);
	}
	
	return 0;

}

