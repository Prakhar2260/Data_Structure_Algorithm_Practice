#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    
	    int ar[N];
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d",&ar[i]);
	    }
	    
	    int max=0;
	    int min=110;
	    
	    int index1=0,index2=0;
	    
	    for(int i=0;i<N;i++)
	     {
	         if(ar[i]>max)
	          {
	              max=ar[i];
	              index1=i;
	          }
	          
	          if(ar[i]<min)
	           {
	               min=ar[i];
	               index2=i;
	           }
	     }
	     
	     if(index1>index2)
	     printf("%d %d\n",ar[index2],ar[index1]);
	     
	     else
	     printf("%d %d\n",ar[index1],ar[index2]);
	    
	    
	}
	
	return 0;

}

