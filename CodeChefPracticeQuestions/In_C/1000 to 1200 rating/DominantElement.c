#include <stdio.h>

int main() 
{
	// your code goes 
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	     scanf("%d",&arr[i]);
	    
	    int freq[1001];
	    
	    for(int i=0;i<1001;i++)
	     {
	         freq[i]=0;
	     }
	     
	     for(int j=0;j<n;j++)
	      {
	          freq[arr[j]]++;
	      }
	      
	      int maxfreq=0;
	      
	      for(int i=0;i<1001;i++)
	       {
	           if(maxfreq<freq[i])
	            {
	                maxfreq=freq[i];
	            }
	       }
	       
	       int maxs=0;
	       
	       for(int i=0;i<1001;i++)
	       {
	           if(maxfreq==freq[i])
	            {
	                maxs++;
	            }
	       }
	       
	       if(maxs==1)
	       {
	           printf("YES\n");
	       }
	       
	       else
	       {
	           printf("NO\n");
	       }
	       
	}
	
	return 0;

}

