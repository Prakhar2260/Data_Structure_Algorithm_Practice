#include <stdio.h>

int cmp(const void *a,const void *b)
 {
     return *(long long*)a - *(long long*)b ;
 }

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    long long arr[n];
	    
	    for(int i=0;i<n;i++)
	    scanf("%lld",&arr[i]);
	    
	    qsort(arr,n,sizeof(long long),cmp);
	    
	    long long sum=0;
	    int fact=0;
	    for(int i=0;i<n;i++)
	     {
	         if(arr[i]-fact>=0)
	         sum=sum+(arr[i]-fact);
	         
	        
	         fact++;
	         
	     }
	     
	     printf("%lld\n",sum);
	}
	
	return 0;

}

