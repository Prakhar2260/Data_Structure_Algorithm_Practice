#include <stdio.h>

int main() 
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	 int N;
	 scanf("%d",&N);
	 int ar[N];
	 
	 for(int i=0;i<N;i++)
	 scanf("%d",&ar[i]);
	  
	 int c=0;
	 
	 for(int i=0;i<N;i++)
	   {
	     if(ar[i]>=1000)
	       c++;
	   }
	  printf("%d\n",c); 
	}
}

