#include <stdio.h>


int cmp(void const *a, void const *b)
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
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	     scanf("%d",&arr[i]);
	     
	     int len=n+k;
	     int mid=len/2;
	     
	     qsort(arr , n , sizeof(int) , cmp);
	     
	     printf("%d\n",arr[mid]);
	}
	
	return 0;

}

