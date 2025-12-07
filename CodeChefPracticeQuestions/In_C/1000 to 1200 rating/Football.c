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
	    
	    int A[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&A[i]);
	     
	     int B[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&B[i]); 
	     
	     int points[N];
	     
	     for(int i=0;i<N;i++)
	      {
	        points[i]=20*A[i] - 10*B[i];  
	      }
	      
	      int total=0;
	      
	      for(int i=0;i<N;i++)
	       {
	         if(points[i]>0)
	         {
	            if(points[i]>total)
	             {
	               total=points[i];  
	             }
	         }
	           
	       }
	       printf("%d\n",total);
	 }
	 return 0;
}

