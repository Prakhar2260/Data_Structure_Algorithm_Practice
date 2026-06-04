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
	     scanf("%lld",&arr[i]);
	     
	     int count=0;
	     
	     for(int i=0;i<n-1;i++)
	      {
	          if(arr[i]%2==arr[i+1]%2)
	           {
	               count++;
	               
	               int j=i+1;
	               while(j<n-1 && arr[j]%2 == arr[j+1]%2)
	                {
	                    count++;
	                    j++;
	                }
	                
	                i=j-1;
	           }
	           
	      }
	      
	      printf("%d\n",count);
	}
	
	return 0;

}

