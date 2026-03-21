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
	    
	    long ar[N];
	    for(int i=0;i<N;i++)
	      scanf("%ld",&ar[i]);
	      
	   // qsort(ar,N,sizeof(int),cmp);
	    
	    long min=1000000001;
	    
	    for(int i=0;i<N;i++)
	     if(min>ar[i])
	       min=ar[i];
	       
	    printf("%ld\n",min);
	}
	
	return 0;

}

