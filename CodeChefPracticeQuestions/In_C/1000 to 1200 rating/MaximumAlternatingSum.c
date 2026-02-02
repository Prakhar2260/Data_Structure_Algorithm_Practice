#include <stdio.h>

int cmp(const void *a,const void *b)
    {
    return (*(int*)b-*(int*)a);    
    }





int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int array[N];
	    for(int i=0;i<N;i++)
	      scanf("%d",&array[i]);
	      
	    qsort(array , N , sizeof(int) , cmp);  
	    
	    int sum1=0;
	    int sum2=0;
	    
	    int len=0;
	    
	    if(N%2==0)
	     len=N/2;
	     
	     else
	      len=(N+1)/2;
	      
	     for(int i=0;i<len;i++)
	      {
	         sum1=sum1+array[i]; 
	      }
	      
	      for(int i=len;i<N;i++)
	      {
	         sum2=sum2+array[i]; 
	      }
	      
	      printf("%d\n",sum1-sum2);
	    
	}
	
	return 0;

}

//https://www.codechef.com/problems/MXALT?tab=statement

