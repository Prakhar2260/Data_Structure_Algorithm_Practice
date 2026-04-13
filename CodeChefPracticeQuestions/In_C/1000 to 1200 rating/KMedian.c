#include <stdio.h>

int cmp(const void *a, const void *b)
 {
     return (*(int*)a - *(int*)b);
 }




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
	     
	    qsort(array,n,sizeof(int),cmp);
	    
	    int M=n-k;
	    int mid=(M-1)/2;
	    
	    int last=-1;
	    
	    for(int i=0;i<=n-M;i++)
	     {
	          int val=array[mid+i];
	          
	          if(last!=val)
	          {
	            last=val;  
	           printf("%d ",val);
	          }
	          
	     }
	     
	     printf("\n");
	    
	}
	
	return 0;

}

