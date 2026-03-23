#include <stdio.h>

int cmp(void const *a , void const *b)
 {
     int x=*(const int*)a;
     int y=*(const int*)b;
     
     return (x>y) - (x<y);
 }

int main()
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	   int N,K;
	   scanf("%d %d",&N,&K);
	   
	   int array[N];
	   for(int i=0;i<N;i++)
	    {
	        scanf("%d",&array[i]);
	    }
	    
	    int sum=0;
	    
	    qsort(array,N,sizeof(int),cmp);
	    
	    for(int i=0;i<N;i++)
	     {
	         if(array[i]==1 && K>0) 
	           {
	               sum=sum+6;
	               K--;
	           }
	           
	           else if(array[i]==2 && K>0) 
	           {
	               sum=sum+5;
	               K--;
	           }
	           
	           else if(array[i]==3 && K>0) 
	           {
	               sum=sum+4;
	               K--;
	           }
	           
	           
	           else
	           sum=sum+array[i];
	     }
	     
	     printf("%d\n",sum);
	    
	}
	
	return 0;

}

