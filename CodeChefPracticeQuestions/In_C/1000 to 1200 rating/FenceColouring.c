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
	    
	    int arr[N];
	    for(int i=0;i<N;i++)
	     {
	         scanf("%d",&arr[i]);
	     }
	     
	     int freq[200001];
	     
	      for(int i=0;i<200001;i++)
	       {
	         freq[i]=0;
	       }
	       
	        int notOne=0;
	       
	      for(int i=0;i<N;i++)
	         {
	            freq[arr[i]]++;
	            
	             if(arr[i]!=1)
                  notOne++;
	         }
	     
	     
        int ans=notOne;

        for(int c=1;c<=N;c++)
        {
            if(freq[c]>0)
            {
                int cost=1+(N-freq[c]);
                if(cost<ans)
                    ans=cost;
            }
        }

	     
	     printf("%d\n",ans);
	    
	}
	
	return 0;

}

