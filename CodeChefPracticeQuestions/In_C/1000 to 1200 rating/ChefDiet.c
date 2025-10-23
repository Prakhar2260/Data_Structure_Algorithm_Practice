#include <stdio.h>

int main() {
	// your code goes here
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	  int N,K;
	  scanf("%d %d",&N,&K);
	  
	  int ar[N];
	  
	  for(int i=0;i<N;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	  
	  
	  int c=0,day=0;
	  int store=0;
	  
	  for(int i=0;i<N;i++)
	  {
	    store=store+ar[i];
	    
	    if(store<K)
	      {
	       c=0;   
	       day=i+1;
	       break;
	      }
	    store=store-K;
	    c=1;
	  }
	  
	  if(c)
	    {
	     printf("YES\n");     
	    }
	    
	  else
	     printf("NO %d\n",day);
	}
	
	return 0;

}

