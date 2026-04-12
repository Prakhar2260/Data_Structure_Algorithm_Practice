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
	    
	    long long ar[N];
	    for(int i=0;i<N;i++)
	     {
	         scanf("%lld",&ar[i]);
	     }
	     
	     
	     
	     int odd=0;
	     
	     for(int i=0;i<N;i++)
	     {
	         if(ar[i]%2!=0)
	          {
	              odd++;
	          }
	     }
	     
	     int operations=odd/2;
	     
	      printf("%d\n",operations);
	     
	}
	
	return 0;

}

