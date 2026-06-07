#include <stdio.h>

int main() 
{
	// your code goes here
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--)
	{
	    int n,q;
	    scanf("%d %d",&n,&q);
	    
	    int sum=0;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	     {
	         scanf("%d",&arr[i]);
	         
	         sum+=arr[i];
	     }
	     
	     while(q--)
	     {
	         int low,high;
	         scanf("%d %d",&low,&high);
	         
	         int diff=(high-low)+1;
	         
	         if(diff%2!=0)
	          {
	              sum++;
	          }
	     }
	     
	     printf("%d\n",sum);
	}
	
	return 0;

}

