#include <stdio.h>

int main()
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	   int n;
	   scanf("%d",&n);
	   
	   int arr[n];
	   for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    int freq[n+1];
	    
	    for(int i=0;i<n+1;i++)
	     {
	         freq[i]=0;
	     }
	     
	      for(int i=0;i<n;i++)
	       {
	         freq[arr[i]]++;
	       }
	    
	    int d=0;
	    
	     for(int i=0;i<n+1;i++)
	     {
	         if(freq[i]>=3)
	          {
	              printf("%d\n",i);
	              d=1;
	              break;
	          }
	     }
	     
	     if(d==0)
	      printf("-1\n");
	   
	}
	
	return 0;

}

