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
	  
	  int girls[N];
	  
	  for(int i=0;i<N;i++)
	  scanf("%d",&girls[i]);
	  
	  int impress=0;
	  int i=0;
	  
	  while(i<=N-K)
	   {
	       int sum=0;
	       
	     for(int j=i;j<i+K;j++)
	       {
	         sum=sum+girls[j];     
	       }
	       
	       i++;
	       
	       if(sum>impress)
	        impress=sum;
	   }
	   
	   printf("%d\n",impress);
	}
	
	return 0;

}

