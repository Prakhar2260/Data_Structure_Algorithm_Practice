#include <stdio.h>

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    
	    int array[n];
	    for(int i=0;i<n;i++)
	     scanf("%d",&array[i]);
	     
	    int f=1;
	    
	    
	    int i=0,j=n-1;
	    while(i<j)
	    {
	        if(array[i]==array[j])
	         {
	             i++;
	             j--;
	         }
	         
	         else if(array[i]==k)
	          {
	              i++;
	          }
	          
	          else if(array[j]==k)
	          {
	              j--;
	          }
	          
	          else
	          {
	              f=0;
	              break;
	          }
	    }
	     
	     if(f==1)
	      {
	          printf("Yes\n");
	      }
	      
	      else
	      {
	          printf("No\n");
	      }
	}
	
	return 0;

}

