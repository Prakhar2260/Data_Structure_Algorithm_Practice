#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	    int count=0;
	    
	    for(int i=0;i<n;i++)
	     {
	         for(int j=i+1;j<n;j++)
	          {
	              int bij=arr[i]&arr[j];
	              
	              if(bij==arr[i])
	               count++;
	          }
	     }
	     
	     printf("%d\n",count);
	}
	
	return 0;

}

