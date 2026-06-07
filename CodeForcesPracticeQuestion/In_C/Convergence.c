#include <stdio.h>

int cmp(const void *a , const void *b)
 {
     long long x = *(const long long*)a;
     long long y = *(const long long*)b;
     
     if(x<y)
      return -1;
      
     if(x>y)
      return 1;
      
      return 0;
 }



int main()
{
	// your code goes here
	
	int tc;
	scanf("%d",&tc);
	
	while(tc--)
	{
	  int n;
	  scanf("%d",&n);
	  
	  long long arr[n];
	  for(int i=0;i<n;i++)
	    scanf("%lld",&arr[i]);
	    
	    qsort(arr , n ,sizeof(long long) , cmp);
	    
	    
	    printf("%d\n",count);
	    
	    
	}
	
	return 0;

}

