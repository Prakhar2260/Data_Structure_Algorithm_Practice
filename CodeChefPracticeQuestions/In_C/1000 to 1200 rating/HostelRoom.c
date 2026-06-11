#include <stdio.h>

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	     {
	         scanf("%d",&arr[i]);
	     }
	     
	     
	     int ans=x;
	     int maxPeople=x;
	     
	     for(int j=0;j<n;j++)
	      {
	          if(arr[j]>0)
	           {
	               maxPeople+=arr[j];
	               
	               if(ans<maxPeople)
	                {
	                    ans=maxPeople;
	                }
	           }
	           
	           else
	           {
	               maxPeople+=arr[j];
	           }
	      }
	      
	      printf("%d\n",ans);
	     
	     
	}
	
	return 0;

}

