#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a , const void *b)
 {
     return (*(int*)a - *(int*)b);
 }

void swap(int *a,int *b)
 {
     int temp=*a;
     *a = *b;
     *b=temp;
 }

int main() 
{
	// your code goes here
	
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    
	    int ar[n];
	    
	    for(int i=0;i<n;i++)
	     {
	         scanf("%d",&ar[i]);
	     }
	     
	     qsort(ar , n, sizeof(int) , cmp);
	     
	     for(int i=2;i<n;i=i+2)
	      {
	          swap(&ar[i-1],&ar[i]);
	      }
	      
	       for(int i=0;i<n;i++)
	      {
	          printf("%d ",ar[i]);
	      }
	      
	      printf("\n");
	      
	}
	
	return 0;

}

