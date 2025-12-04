#include <stdio.h>

int main() {
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N;
	  scanf("%d",&N);
	  
	  
	  int u = 1;
	  int v = 3;
	  
	  int j = 3;
	  int c=0;
	  
	   
	  while(1)
	   {
	     if(u<=N && N<v)
	      {
	         c=v-u;
	         break;
	      }
	      
	     u=v;
	     v=v+j;
	     j++;
	   }
	   
	   printf("%d\n",c-1);
	}
	
	return 0;

}

