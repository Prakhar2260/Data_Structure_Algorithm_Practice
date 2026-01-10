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
	    
	    int array[N];
	    for(int i=0;i<N;i++)
	     scanf("%d",&array[i]);
	     
	    int sum1=0;
	    
	    for(int i=0;i<N;i++)
	       sum1=sum1+array[i];
	       
	   int sum2=sum1;    
	       
	     if(sum1%2==0)
	       {
	         printf("%d\n",N);
	         continue;
	       }
	       
	       int r=0;
	       int l=0;
	       
	     for(int j=N-1;j>=0;j--)
	       {
	         sum1=sum1-array[j];
	         r++;
	         
	         if(sum1%2==0)
	           {
	             break;
	           } 
	       }
	       
	       
	       for(int j=0;j<N;j++)
	       {
	         sum2=sum2-array[j];
	         l++;
	         
	         if(sum2%2==0)
	           {
	             break;
	           } 
	       }
	       
	       int eff=0;
	       
	       if(l<r)
	        eff=l;
	        
	        else
	        eff=r; 
	       
	       
	       printf("%d\n",N-eff);
	       
	}
	
	return 0;

}

