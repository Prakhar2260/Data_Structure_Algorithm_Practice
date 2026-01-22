#include <stdio.h>
# include <math.h>

int main() 
{
	// your code goes here
	
	int T;
	scanf("%d",&T);
	
	while(T--)
	 {
	      long long N,M;
	      scanf("%lld %lld",&N,&M);
	     
	      long long array[N];
	      for(int i=0;i<N;i++)
	       scanf("%lld",&array[i]);
	       
	       long long sum=0;
	       
	       for(int i=0;i<N;i++)
	        {
	              long long max=0;
	              long long d1=abs(array[i]-M);
	              
	              long long d2=array[i]-1;
	              
	              if(d1>d2)
	              {
	                  max=d1;
	              }
	              
	              else
	               {
	                   max=d2;
	               }
	           
	              sum=sum+max;
	        }
	        
	        printf("%lld\n",sum);
	 }

    return 0;
    
}

