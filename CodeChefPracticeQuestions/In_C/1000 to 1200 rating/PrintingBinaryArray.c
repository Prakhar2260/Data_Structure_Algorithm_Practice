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
	     {
	         scanf("%d",&arr[i]);
	     }
	     
	     for(int i=0;i<n;i++)
	      {
	          if(arr[i]==1)
	          printf("0 ");
	          
	          else
	          printf("1 ");
	      }
	      
	      printf("\n");
	    
	    
	}
	
	return 0;

}

