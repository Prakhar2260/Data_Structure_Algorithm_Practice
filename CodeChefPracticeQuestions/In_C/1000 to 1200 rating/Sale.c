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
	    
	    long long arr[n];
	    for(int i=0;i<n;i++)
	     {
	         scanf("%lld",&arr[i]);
	     }
	     
	     long long max=0;
	     int index=-1;
	     for(int i=0;i<n;i++)
	      {
	          if(max<arr[i])
	           {
	               max=arr[i];
	               index=i;
	           }
	      }
	      
	      long long val=0;
	      long long prefix=0;
	      
	      for(int i=0;i<n;i++)
	      {
	           long long v;
	           
	               v=arr[i]*2 + prefix;
	               
	               if(val<v)
	               {
	                   val=v;
	               }
	               
	               prefix=prefix+arr[i];
	           
	      }
	      
	      printf("%lld\n",val);
	}
	
	return 0;

}

