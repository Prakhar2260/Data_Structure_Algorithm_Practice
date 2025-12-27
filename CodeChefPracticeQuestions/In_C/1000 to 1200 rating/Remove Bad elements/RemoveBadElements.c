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
	  
	  int ar[N];
	  
	  for(int i=0;i<N;i++)
	   scanf("%d",&ar[i]);
	  
	  int freq[N+1];
	  for (int i = 0; i <= N; i++)
       freq[i] = 0;
	  
	  for(int i=0;i<N;i++)
	    {
	        freq[ar[i]]++;
	    }
	    
	    int largestFreq=0;
	    
	  for(int i=0;i<=N;i++)
	    {
	        if(freq[i]>largestFreq)
	        {
	         largestFreq=freq[i];
	        
	        } 
	    }
	    
	    
	    
	    printf("%d\n",N-largestFreq);
	}
	
	return 0;

}

